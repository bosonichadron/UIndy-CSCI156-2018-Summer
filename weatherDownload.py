#from boto.s3.connection import S3Connection
#from boto.s3.key import Key
import boto3
import urllib2
import time


IMAGE_URL = 'https://marion-in.weatherstem.com/skycamera/marion-in/uindy/cumulus/snapshot.jpg'

S3_ACCESS_KEY = 'AKIAIRGH6IFSG4WFYS6Q'
S3_SECRET_KEY = '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'
S3_BUCKET = 'uindy-weathercam'
S3_REGION = 's3-us-east-2.amazonaws.com'



last = ''

while True:
    time.sleep(3)
    response = urllib2.urlopen(IMAGE_URL)
    data = response.read()
    if data == last:
        print 'same'
        continue

    s3 = boto3.resource('s3',
            aws_access_key_id=S3_ACCESS_KEY,
            aws_secret_access_key=S3_SECRET_KEY)
    #conn = S3Connection(S3_ACCESS_KEY, S3_SECRET_KEY, host = S3_REGION)
    #bucket = conn.get_bucket(S3_BUCKET)
    
    unix_minute = int(time.time()) / 60 * 60
    
    key = str(unix_minute) + '.jpg'
    #k = Key(bucket)
    #k.key = key
    object = s3.Object(S3_BUCKET, key)
    object.put(Body = data)
    #k.set_metadata('Content-Type', 'image/jpeg')
    #k.set_contents_from_string(data)
    #k.make_public()
    last = data
    print "Wrote: "+ key
    
    

