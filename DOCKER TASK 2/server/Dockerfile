FROM python:3.9-alpine

WORKDIR /app

COPY server.py requirements.txt /app/

RUN apk update && \
    pip install --upgrade pip && \
    pip install -r requirements.txt

EXPOSE 5000

CMD ["python", "server.py"]