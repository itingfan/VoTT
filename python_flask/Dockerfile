# Format: FROM    repository[:version]
FROM vott_flask_base
COPY . /app
WORKDIR /app
CMD ["gunicorn"  , "-b", "0.0.0.0:5000", "--workers", "3", "--timeout", "600", "app:app"]
