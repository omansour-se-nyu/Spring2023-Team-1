from flask import Flask, request
from utils import *
from db_query import *
from send_phone import *

app = Flask(__name__)

@app.route('/receive_visit_data', methods=['POST'])
def receive_visit_data():
    visit_data = request.get_json()
    return notify(visit_data)

@app.route("/test", methods=["GET"])
def test():
    return "hi"

if __name__ == '__main__':
    app.run(debug=True)