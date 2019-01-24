# target: cleanflight
FROM cleanflight-dev
COPY . /src
WORKDIR /src
ENTRYPOINT ["/src/entrypoint.sh"]
