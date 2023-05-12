import requests
import json
from config import *

def send_email_notification(email_receiver, message):

    url = "https://api.postmarkapp.com/email"
    headers = {
        "Accept": "application/json",
        "Content-Type": "application/json",
        "X-Postmark-Server-Token": postmark_token
    }

    data = {
        "From": "xc1008@nyu.edu",
        "To": email_receiver,
        "Subject": "Mentcare medical appointment reminder",
        "HtmlBody": message,
        "MessageStream": "outbound"
    }

    response = requests.post(url, headers=headers, data=json.dumps(data))

    return response