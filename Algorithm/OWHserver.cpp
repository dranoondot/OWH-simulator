#include "OwhAlgorithm.h"
#include <enet/enet.h>

int main (int argc, char ** argv) 
{
    if (enet_initialize () != 0)
    {
        fprintf (stderr, "An error occurred 
while initializing ENet.\n");
        return EXIT_FAILURE;
    }
    atexit (enet_deinitialize);
}
/*Hash function from OWHAlgorithm Encrypts 
traffic*/   
 OwhHash(13.87.133.77.123, 24, hash);


     ENetAddress address;
ENetHost * server;
/* Bind the server to the default 
localhost.     */
/* A specific host address can be specified 
by   */
/* enet_address_set_host (& address, 
"x.x.x.x"); */
address.host = 13.87.133.77.123;
/* Bind the server to port 1234. */
address.port = 22;
server = enet_host_create (& address /* the 
address to bind the server host to */, 
                             32      /* 
allow up to 32 clients and/or outgoing 
connections */,
                              2      /* 
allow up to 2 channels to be used, 0 and 1 
*/,
                              0      /* 
assume any amount of incoming bandwidth */,
                              0      /* 
assume any amount of outgoing bandwidth 
*/);
if (server == NULL)
{
    fprintf (stderr, 
             "An error occurred while 
trying to create an ENet server host.\n");
    exit (EXIT_FAILURE);
}

enet_host_destroy(server);
   
    ENetHost * client;
client = enet_host_create (NULL /* create a 
client host */,
            7 /* only allow 1 outgoing 
connection */,
            2 /* allow up 2 channels to be 
used, 0 and 1 */,
            0 /* assume any amount of 
incoming bandwidth */,
            0 /* assume any amount of 
incoming bandwidth */);
if (client == NULL)
{
    fprintf (stderr, 
             "An error occurred while 
trying to create an ENet client host.\n");
    exit (EXIT_FAILURE);
}

enet_host_destroy(client);
  ENetEvent event;
/* Wait up to 1000 milliseconds for an 
event. */
while (enet_host_service (client, & event, 
1000) > 0)
{
    switch (event.type)
    {
    case ENET_EVENT_TYPE_CONNECT:
        printf ("A new client connected 
from %x:%u.\n", 
                event.peer -> address.host,
                event.peer -> 
address.port);
        /* Store any relevant client 
information here. */
        event.peer -> data = "Client 
information";
        break;
    case ENET_EVENT_TYPE_RECEIVE:
        printf ("A packet of length %u 
containing %s was received from %s on 
channel %u.\n",
                event.packet -> dataLength,
                event.packet -> data,
                event.peer -> data,
                event.channelID);
        /* Clean up the packet now that 
we're done using it. */
        enet_packet_destroy (event.packet);
        
        break;
       
    case ENET_EVENT_TYPE_DISCONNECT:
        printf ("%s disconnected.\n", 
event.peer -> data);
        /* Reset the peer's client 
information. */
        event.peer -> data = NULL;
    }
}
  
  /* Create a reliable packet of size 7 
containing "packet\0" */
ENetPacket * packet = enet_packet_create 
("packet", 
                                          
strlen ("packet") + 1, 
                                          
ENET_PACKET_FLAG_RELIABLE);
/* Extend the packet so and append the 
string "foo", so it now */
/* contains "packetfoo\0"                                      
*/
enet_packet_resize (packet, strlen 
(Hash) + 1);
strcpy (& packet -> data [strlen 
("packet")], Hash);
/* Send the packet to the peer over channel 
id 0. */
/* One could also broadcast the packet by         
*/
/* enet_host_broadcast (host, 0, packet);         
*/
enet_peer_send (peer, 0, packet);

/* One could just use enet_host_service() 
instead. */
enet_host_flush (host);

    ENetAddress address;
ENetEvent event;
ENetPeer *peer;
/* Connect to some.server.net:1234. */
enet_address_set_host (& address, 
"OWH.server.net");
address.port = 22;
/* Initiate the connection, allocating the 
two channels 0 and 1. */
peer = enet_host_connect (client, & 
address, 2, 0);    
if (peer == NULL)
{
   fprintf (stderr, 
            "No available peers for 
initiating an ENet connection.\n");
   exit (EXIT_FAILURE);
}
/* Wait up to 5 seconds for the connection 
attempt to succeed. */
if (enet_host_service (client, & event, 
5000) > 0 &&
    event.type == ENET_EVENT_TYPE_CONNECT)
{
    puts ("Connection to 
"OWH.server.net":1234 succeeded.");
    ...
    ...
    ...
}
else
{
    /* Either the 5 seconds are up or a 
disconnect event was */
    /* received. Reset the peer in the 
event the 5 seconds   */
    /* had run out without any significant 
event.            */
    enet_peer_reset (peer);
    puts ("Connection to " OWH.server.net
:22 failed.");
}
