FROM pwn.red/jail

COPY --from=ubuntu@sha256:c35e29c9450151419d9448b0fd75374fec4fff364a27f176fb458d472dfc9e54 / /srv

RUN mkdir -p /srv/app
WORKDIR /srv/app
COPY --chmod=555 challenge run
RUN echo "uoftctf{stack_obliterated_ow}" > ./flag.txt && chmod 444 ./flag.txt

ENV JAIL_PIDS=10 JAIL_MEM=10M JAIL_TIME=120
