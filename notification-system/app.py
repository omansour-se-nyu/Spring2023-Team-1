from flask import Flask, request
from utils import *
from db_query import *
from send_phone import *
from logger import *

app = Flask(__name__)
logger = Logger("log/api_log")

@app.route('/receive_visit_data', methods=['POST'])
def receive_visit_data():
    visit_data = request.get_json()
    result = notify(visit_data)
    logger.info(visit_data)
    logger.info(result)
    return "receive_visit_data"

@app.route("/test", methods=["GET"])
def test():
    return "hi"

if __name__ == '__main__':
    app.run(debug=True)