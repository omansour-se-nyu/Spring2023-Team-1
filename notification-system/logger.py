import logging
from logging.handlers import RotatingFileHandler
from datetime import datetime

class Logger:

    def __init__(self, file_name):

        self.logger = logging.getLogger("Rotating log")
        self.logger.setLevel(logging.INFO)

        handler = RotatingFileHandler(file_name, maxBytes=5000000,
                                backupCount=10)

        self.logger.addHandler(handler)

    def _log(self, level, data):

        now = datetime.utcnow().strftime("%Y-%m-%d %H:%M:%S")
        self.logger.info(f"{now} {level.upper()} {data}")

    def info(self, msg):
        self._log("INFO", msg)

    def warning(self, msg):
        self._log("WARNING", msg)

    def error(self, msg):
        self._log("ERROR", msg)