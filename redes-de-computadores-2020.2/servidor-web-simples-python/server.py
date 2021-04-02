# -*- coding: utf-8 -*-
from socket import *

host = 'localhost'
port = 2345

server = socket(AF_INET, SOCK_STREAM)

server.bind((host, port))

server.listen(1)

print("Iniciando servidor...")
print("Porta:", port)

while True:
    try:
        connection, address = server.accept()
        request = connection.recv(1024).decode('utf-8')

        messageTemp = request.split('/')
        messageFile = messageTemp[1].split(' HTTP')

        url = messageFile[0]

        if url == '':
            url = 'index.html'

        file = open(url, 'rb')
        
        response = file.read()
        
        file.close()

        header = 'HTTP/1.1 200 OK\n'
        tipoarquivo = 'text/html'

        header += 'Content-Type: ' + str(tipoarquivo) + '\n\n'

    except Exception as e:
        header = 'HTTP/1.1 404 Not Found\n\n'
        response = '<html><meta charset= "utf-8"><body><h3 style="text-align: center;">404 Not Found</h3></div>' \
                   '</body></html>'.encode('utf-8')

    except KeyboardInterrupt:
        print("\nVocê pressionou ^C, encerrando...\n")
        exit()

    print(header)    
    resposta = header.encode('utf-8')
    resposta += response                
    connection.send(resposta)                  

    connection.close()
