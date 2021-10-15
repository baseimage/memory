FROM alpine:3.12 AS build

RUN apk update
RUN apk add make gcc musl-dev

COPY . /root
WORKDIR /root
RUN make

FROM alpine:3.12
COPY --from=build /root/mem /bin/mem
RUN chmod +x /bin/mem
ENTRYPOINT ["/bin/mem"]
