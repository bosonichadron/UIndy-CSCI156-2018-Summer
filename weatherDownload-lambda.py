#from boto.s3.connection import S3Connection
#from boto.s3.key import Key
import boto3
import botocore
import urllib2
import time


IMAGE_URL = 'https://marion-in.weatherstem.com/skycamera/marion-in/uindy/cumulus/snapshot.jpg'

S3_ACCESS_KEY = 'AKIAIRGH6IFSG4WFYS6Q'
S3_SECRET_KEY = '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'
S3_BUCKET = 'uindy-weathercam'
S3_REGION = 's3-us-east-2.amazonaws.com'

# Does image exist in S3?
s3 = boto3.resource('s3',
            aws_access_key_id=S3_ACCESS_KEY,
            aws_secret_access_key=S3_SECRET_KEY)
    
unix_minute = int(time.time()) / 60 * 60
key = str(unix_minute) + '.jpg'

try:
    s3.Object(S3_BUCKET, key).load()
except botocore.exceptions.ClientError as e:
    # Image does not exist
    response = urllib2.urlopen(IMAGE_URL)
    data = response.read()
    object = s3.Object(S3_BUCKET, key)
    object.put(Body = data, ContentType = 'image/jpeg')
    # Make it public
    object_acl = s3.ObjectAcl(S3_BUCKET, key)
    object_acl.put(ACL='public-read')
    
else:
    print "Already there"

    
    
    

