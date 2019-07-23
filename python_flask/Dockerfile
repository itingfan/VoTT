# Format: FROM    repository[:version]
FROM       ubuntu:latest
RUN apt-get update -y
RUN apt-get install -y python3-pip python-dev build-essential libsm6 libxext6 libfontconfig1 libxrender1
COPY . /app
WORKDIR /app
RUN pip3 install -r requirements.txt
ENTRYPOINT ["python3"]
CMD ["app.py"]