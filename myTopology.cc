#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/core-module.h"

using namespace ns3;

int main(int arg, char *argv[]){
 
 NodeContainer routers;
 routers.Create(10);

 InternetStackHelper stack;
 stack.Install(routers);

 PointToPointHelper p2p;
 p2p.Install(routers);

 Ipv4AddressHelper address;

//------------------------------------------------------------------------------------------------
 NodeContainer subnetAB;
 subnetAB.Add(routers.Get(0));
 subnetAB.Add(routers.Get(1));

 NetDeviceContainer subnetAB_Devices = p2p.Install(subnetAB); 
 address.SetBase("10.1.1.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetAB_Interfaces = address.Assign(subnetAB_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetAE;
 subnetAB.Add(routers.Get(0));
 subnetAB.Add(routers.Get(4));

 NetDeviceContainer subnetAE_Devices = p2p.Install(subnetAE); 
 address.SetBase("10.1.2.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetAE_Interfaces = address.Assign(subnetAE_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetBC;
 subnetBC.Add(routers.Get(1));
 subnetBC.Add(routers.Get(2));

 NetDeviceContainer subnetBC_Devices = p2p.Install(subnetBC);
 address.SetBase("10.1.3.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetBC_Interfaces = address.Assign(subnetBC_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetBF;
 subnetBF.Add(routers.Get(1));
 subnetBF.Add(routers.Get(5));

 NetDeviceContainer subnetBF_Devices = p2p.Install(subnetBF);
 address.SetBase("10.1.4.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetBF_Interfaces = address.Assign(subnetBF_Devices);

//------------------------------------------------------------------------------------------------ 
 NodeContainer subnetCD; 
 subnetCD.Add(routers.Get(2));
 subnetCD.Add(routers.Get(3));

 NetDeviceContainer subnetCD_Devices = p2p.Install(subnetCD);
 address.SetBase("10.1.5.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetCD_Interfaces = address.Assign(subnetCD_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetCG; 
 subnetCG.Add(routers.Get(2));
 subnetCG.Add(routers.Get(6));

 NetDeviceContainer subnetCG_Devices = p2p.Install(subnetCG);
 address.SetBase("10.1.6.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetCG_Interfaces = address.Assign(subnetCG_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetDH; 
 subnetDH.Add(routers.Get(3));
 subnetDH.Add(routers.Get(7));

 NetDeviceContainer subnetDH_Devices = p2p.Install(subnetDH);
 address.SetBase("10.1.7.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetDH_Interfaces = address.Assign(subnetDH_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetEF; 
 subnetEF.Add(routers.Get(4));
 subnetEF.Add(routers.Get(5));

 NetDeviceContainer subnetEF_Devices = p2p.Install(subnetEF);
 address.SetBase("10.1.8.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetEF_Interfaces = address.Assign(subnetEF_Devices);

//------------------------------------------------------------------------------------------------ 
 NodeContainer subnetEI; 
 subnetEI.Add(routers.Get(4));
 subnetEI.Add(routers.Get(8));

 NetDeviceContainer subnetEI_Devices = p2p.Install(subnetEI);
 address.SetBase("10.1.9.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetEI_Interfaces = address.Assign(subnetEI_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetFG; 
 subnetFG.Add(routers.Get(5));
 subnetFG.Add(routers.Get(6));

 NetDeviceContainer subnetFG_Devices = p2p.Install(subnetFG);
 address.SetBase("10.1.10.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetFG_Interfaces = address.Assign(subnetFG_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetFI; 
 subnetFI.Add(routers.Get(5));
 subnetFI.Add(routers.Get(8));

 NetDeviceContainer subnetFI_Devices = p2p.Install(subnetFI);
 address.SetBase("10.1.11.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetFI_Interfaces = address.Assign(subnetFI_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetGJ; 
 subnetGJ.Add(routers.Get(6));
 subnetGJ.Add(routers.Get(9));

 NetDeviceContainer subnetGJ_Devices = p2p.Install(subnetGJ);
 address.SetBase("10.1.12.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetGJ_Interfaces = address.Assign(subnetGJ_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetHJ; 
 subnetHJ.Add(routers.Get(7));
 subnetHJ.Add(routers.Get(9));

 NetDeviceContainer subnetHJ_Devices = p2p.Install(subnetHJ);
 address.SetBase("10.1.13.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetHJ_Interfaces = address.Assign(subnetHJ_Devices);

//------------------------------------------------------------------------------------------------
 NodeContainer subnetIJ; 
 subnetIJ.Add(routers.Get(8));
 subnetIJ.Add(routers.Get(9));

 NetDeviceContainer subnetIJ_Devices = p2p.Install(subnetIJ);
 address.SetBase("10.1.14.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetIJ_Interfaces = address.Assign(subnetIJ_Devices);

//------------------------------------------------------------------------------------------------


 Simulator::Run();
 Simulator::Destroy();

 return 0;
}
