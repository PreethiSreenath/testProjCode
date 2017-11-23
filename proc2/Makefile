
CC=	gcc
#CC=	arm-linux-gcc
#CC=	arm-9tdmi-linux-gnu-gcc
#CC = /home/ganesh/bin/arm-2011.09/bin/arm-none-linux-gnueabi-gcc -pthread

#INCLUDE= -I../include
CFLAGS_TGT=  -DEMBED_TGT=1
#CFLAGS_HOST= -DDEBUG=1
OBJS= main.o 		
#	  ppp_rel.o		\

TARGET=samp2

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

.c.o:
	$(CC) $(CFLAGS_TGT) -c $^ $(INCLUDE)
#	$(CC) $(CFLAGS_HOST) -c $^ $(INCLUDE)

clean::
	rm $(OBJS) $(TARGET)
