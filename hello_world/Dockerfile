### development
FROM debian:stable as development

RUN apt update 
RUN apt install -y build-essential clang lldb

RUN useradd -ms /bin/bash docker
USER docker

WORKDIR /home/docker/app

### debug
FROM development as debug

EXPOSE 1234
EXPOSE 31200-31300

ENTRYPOINT lldb-server platform --listen "*:1234" --server --min-gdbserver-port 31200 --max-gdbserver-port 31300

#### builder
FROM development as builder
USER root
COPY ./ . 
RUN clang hello_world.c -o hello

### production
FROM debian:buster-slim as production
COPY --from=builder /home/docker/app/hello ./bin