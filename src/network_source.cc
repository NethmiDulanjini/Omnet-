/*
 * network_source.cc
 *
 *  Created on: Sep 1, 2023
 *      Author: user
 */

#include <omnetpp.h>

using namespace omnetpp;

class My_Node : public cSimpleModule
{
protected:
    void initialize() override;
    void handleMessage(cMessage *msg)override;

};
Define_Module(My_Node);//register the class with omnet++

void My_Node :: initialize()
{
    if(strcmp("Computer_1", getName())==0)
    {
        cMessage *msg = new cMessage(":Hey , Can I get your index number ?");

        send(msg,"output_gate");


    }

    if(strcmp("Computer_2", getName())==0)
    {
        cMessage *msg = new cMessage(":205115B");

        send(msg,"output_gate");


    }

    if(strcmp("Computer_3", getName())==0)
    {
        cMessage *msg = new cMessage(":Where Are you from?");

        send(msg,"output_gate");


    }

    if(strcmp("Computer_4", getName())==0)
     {
         cMessage *msg = new cMessage(":I am from Kurunegala");

         send(msg,"output_gate");


     }

    if(strcmp("Computer_5", getName())==0)
        {
            cMessage *msg = new cMessage(":Ok, Nice to meet you.!");

            send(msg,"output_gate");


        }


}
void My_Node :: handleMessage(cMessage *msg)
{
    send(msg,"output_gate");
}



