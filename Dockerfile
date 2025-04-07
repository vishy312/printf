FROM gcc:latest

WORKDIR /usr/local/app

COPY . .

RUN gcc -o printf *.c 

CMD [ "./printf" ]