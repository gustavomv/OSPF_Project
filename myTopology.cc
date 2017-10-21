#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/core-module.h"

using namespace ns3;

int main(int argc, char *argv[]){
 
 NodeContainer routers;
 routers.Create(10);

 InternetStackHelper stack;
 stack.Install(routers);

 PointToPointHelper p2p;
 
 Ipv4AddressHelper address;

/*----------------------------------------------------------------------------------------------*/
 std::string speedAB = "10Mbps";
 std::string delayAB = "4ms";

 std::string speedAE = "20Mbps";
 std::string delayAE = "5ms";

 std::string speedBC = "30Mbps";
 std::string delayBC = "6ms";

 std::string speedBF = "40Mbps";
 std::string delayBF = "7ms";

 std::string speedCD = "50Mbps";
 std::string delayCD = "8ms";

 std::string speedCG = "60Mbps";
 std::string delayCG = "9ms";

 CommandLine cmd;
 cmd.AddValue("SubnetAB_Rate", "Taxa de bits por segundo no canal", speedAB);
 cmd.AddValue("SubnetAB_Delay", "Tempo de atraso no canal", delayAB);

 cmd.AddValue("SubnetAE_Rate", "Taxa de bits por segundo no canal", speedAE);
 cmd.AddValue("SubnetAE_Delay", "Tempo de atraso no canal", delayAE);

 cmd.AddValue("SubnetBC_Rate", "Taxa de bits por segundo no canal", speedBC);
 cmd.AddValue("SubnetBC_Delay", "Tempo de atraso no canal", delayBC);

 cmd.AddValue("SubnetBF_Rate", "Taxa de bits por segundo no canal", speedBF);
 cmd.AddValue("SubnetBF_Delay", "Tempo de atraso no canal", delayBF);

 cmd.AddValue("SubnetCD_Rate", "Taxa de bits por segundo no canal", speedCD);
 cmd.AddValue("SubnetCD_Delay", "Tempo de atraso no canal", delayCD);

 cmd.AddValue("SubnetCG_Rate", "Taxa de bits por segundo no canal", speedCG);
 cmd.AddValue("SubnetCG_Delay", "Tempo de atraso no canal", delayCG); 
 cmd.Parse(argc, argv);

 std::cout << "\nSubnetAB_Rate = " << speedAB << std::endl;
 std::cout << "SubnetAB_Delay = " << delayAB << std::endl;

 std::cout << "\nSubnetAE_Rate = " << speedAE << std::endl;
 std::cout << "SubnetAE_Delay = " << delayAE << std::endl;

 std::cout << "\nSubnetBC_Rate = " << speedBC << std::endl;
 std::cout << "SubnetBC_Delay = " << delayBC << std::endl;
 
 std::cout << "\nSubnetBF_Rate = " << speedBF << std::endl;
 std::cout << "SubnetBF_Delay = " << delayBF << std::endl;
 
 std::cout << "\nSubnetCD_Rate = " << speedCD << std::endl;
 std::cout << "SubnetCD_Delay = " << delayCD << std::endl;

 std::cout << "\nSubnetCG_Rate = " << speedCG << std::endl;
 std::cout << "SubnetCG_Delay = " << delayCG << std::endl;

/*----------------------------------------------------------------------------------------------*/
 NodeContainer subnetAB;
 subnetAB.Add(routers.Get(0));
 subnetAB.Add(routers.Get(1));

 DataRate Speed_AB(speedAB);
 Time Delay_AB(delayAB);

 NetDeviceContainer subnetAB_Devices = p2p.Install(subnetAB);

 address.SetBase("10.1.1.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetAB_Interfaces = address.Assign(subnetAB_Devices);

 Config::Set("/NodeList/0/DeviceList/0/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_AB));
 Config::Set("/NodeList/1/DeviceList/1/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_AB));

 Config::Set("/ChannelList/0/$ns3::PointToPointChannel/Delay", TimeValue(Delay_AB));

//------------------------------------------------------------------------------------------------
 NodeContainer subnetAE;
 subnetAE.Add(routers.Get(0));
 subnetAE.Add(routers.Get(4));

 DataRate Speed_AE(speedAE);
 Time Delay_AE(delayAE);

 NetDeviceContainer subnetAE_Devices = p2p.Install(subnetAE); 

 address.SetBase("10.1.2.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetAE_Interfaces = address.Assign(subnetAE_Devices);

 Config::Set("/NodeList/0/DeviceList/2/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_AE));
 Config::Set("/NodeList/4/DeviceList/3/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_AE));

 Config::Set("/ChannelList/1/$ns3::PointToPointChannel/Delay", TimeValue(Delay_AE));

//------------------------------------------------------------------------------------------------
 NodeContainer subnetBC;
 subnetBC.Add(routers.Get(1));
 subnetBC.Add(routers.Get(2));

 DataRate Speed_BC(speedBC);
 Time Delay_BC(delayBC);

 NetDeviceContainer subnetBC_Devices = p2p.Install(subnetBC);
 address.SetBase("10.1.3.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetBC_Interfaces = address.Assign(subnetBC_Devices);

 Config::Set("/NodeList/1/DeviceList/4/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_BC));
 Config::Set("/NodeList/2/DeviceList/5/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_BC));

 Config::Set("/ChannelList/2/$ns3::PointToPointChannel/Delay", TimeValue(Delay_BC));

//------------------------------------------------------------------------------------------------
 NodeContainer subnetBF;
 subnetBF.Add(routers.Get(1));
 subnetBF.Add(routers.Get(5));

 DataRate Speed_BF(speedBF);
 Time Delay_BF(delayBF);

 NetDeviceContainer subnetBF_Devices = p2p.Install(subnetBF);
 address.SetBase("10.1.4.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetBF_Interfaces = address.Assign(subnetBF_Devices);

 Config::Set("/NodeList/1/DeviceList/6/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_BF));
 Config::Set("/NodeList/5/DeviceList/7/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_BF));

 Config::Set("/ChannelList/3/$ns3::PointToPointChannel/Delay", TimeValue(Delay_BF));

//------------------------------------------------------------------------------------------------ 
 NodeContainer subnetCD; 
 subnetCD.Add(routers.Get(2));
 subnetCD.Add(routers.Get(3));

 DataRate Speed_CD(speedCD);
 Time Delay_CD(delayCD);

 NetDeviceContainer subnetCD_Devices = p2p.Install(subnetCD);
 address.SetBase("10.1.5.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetCD_Interfaces = address.Assign(subnetCD_Devices);

 Config::Set("/NodeList/2/DeviceList/8/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_CD));
 Config::Set("/NodeList/3/DeviceList/9/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_CD));

 Config::Set("/ChannelList/4/$ns3::PointToPointChannel/Delay", TimeValue(Delay_BF));

//------------------------------------------------------------------------------------------------
 NodeContainer subnetCG; 
 subnetCG.Add(routers.Get(2));
 subnetCG.Add(routers.Get(6));

 DataRate Speed_CG(speedCG);
 Time Delay_CG(delayCG);

 NetDeviceContainer subnetCG_Devices = p2p.Install(subnetCG);

 address.SetBase("10.1.6.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetCG_Interfaces = address.Assign(subnetCG_Devices);

 Config::Set("/NodeList/2/DeviceList/10/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_CG));
 Config::Set("/NodeList/6/DeviceList/11/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_CG));

 Config::Set("/ChannelList/5/$ns3::PointToPointChannel/Delay", TimeValue(Delay_CG));

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
}
