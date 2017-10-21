#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/core-module.h"
#include "ns3/applications-module.h"
#include "ns3/netanim-module.h"
#include "ns3/mobility-module.h"

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

 std::string speedDH = "50Mbps";
 std::string delayDH = "8ms";

 std::string speedEF = "40Mbps";
 std::string delayEF = "7ms";
 
 std::string speedEI = "30Mbps";
 std::string delayEI = "6ms";

 std::string speedFG = "20Mbps";
 std::string delayFG = "5ms";

 std::string speedFI = "10Mbps";
 std::string delayFI = "4ms";

 std::string speedGJ = "5Mbps";
 std::string delayGJ = "3ms";

 std::string speedHJ = "2Mbps";
 std::string delayHJ = "2ms";

 std::string speedIJ = "1Mbps";
 std::string delayIJ = "1ms";

/*----------------------------------------------------------------------------------------------*/
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

 cmd.AddValue("SubnetDH_Rate", "Taxa de bits por segundo no canal", speedDH);
 cmd.AddValue("SubnetDH_Delay", "Tempo de atraso no canal", delayDH);

 cmd.AddValue("SubnetEF_Rate", "Taxa de bits por segundo no canal", speedEF);
 cmd.AddValue("SubnetEF_Delay", "Tempo de atraso no canal", delayEF);

 cmd.AddValue("SubnetEI_Rate", "Taxa de bits por segundo no canal", speedEI);
 cmd.AddValue("SubnetEI_Delay", "Tempo de atraso no canal", delayEI);

 cmd.AddValue("SubnetFG_Rate", "Taxa de bits por segundo no canal", speedFG);
 cmd.AddValue("SubnetFG_Delay", "Tempo de atraso no canal", delayFG);

 cmd.AddValue("SubnetFI_Rate", "Taxa de bits por segundo no canal", speedFI);
 cmd.AddValue("SubnetFI_Delay", "Tempo de atraso no canal", delayFI);

 cmd.AddValue("SubnetGJ_Rate", "Taxa de bits por segundo no canal", speedGJ);
 cmd.AddValue("SubnetGJ_Delay", "Tempo de atraso no canal", delayGJ);

 cmd.AddValue("SubnetHJ_Rate", "Taxa de bits por segundo no canal", speedHJ);
 cmd.AddValue("SubnetHJ_Delay", "Tempo de atraso no canal", delayHJ);

 cmd.AddValue("SubnetIJ_Rate", "Taxa de bits por segundo no canal", speedIJ);
 cmd.AddValue("SubnetIJ_Delay", "Tempo de atraso no canal", delayIJ); 
 cmd.Parse(argc, argv);

/*----------------------------------------------------------------------------------------------*/
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

 std::cout << "\nSubnetDH_Rate = " << speedDH << std::endl;
 std::cout << "SubnetDH_Delay = " << delayDH << std::endl;

 std::cout << "\nSubnetEF_Rate = " << speedEF << std::endl;
 std::cout << "SubnetEF_Delay = " << delayEF << std::endl;

 std::cout << "\nSubnetEI_Rate = " << speedEI << std::endl;
 std::cout << "SubnetEI_Delay = " << delayEI << std::endl;
 
 std::cout << "\nSubnetFG_Rate = " << speedFG << std::endl;
 std::cout << "SubnetFG_Delay = " << delayFG << std::endl;
 
 std::cout << "\nSubnetFI_Rate = " << speedFI << std::endl;
 std::cout << "SubnetFI_Delay = " << delayFI << std::endl;

 std::cout << "\nSubnetGJ_Rate = " << speedGJ << std::endl;
 std::cout << "SubnetGJ_Delay = " << delayGJ << std::endl;

 std::cout << "\nSubnetHJ_Rate = " << speedHJ << std::endl;
 std::cout << "SubnetHJ_Delay = " << delayHJ << std::endl;

 std::cout << "\nSubnetIJ_Rate = " << speedIJ << std::endl;
 std::cout << "SubnetIJ_Delay = " << delayIJ << "\n" << std::endl;

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

 DataRate Speed_DH(speedDH);
 Time Delay_DH(delayDH);
 
 NetDeviceContainer subnetDH_Devices = p2p.Install(subnetDH);
 address.SetBase("10.1.7.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetDH_Interfaces = address.Assign(subnetDH_Devices);

 Config::Set("/NodeList/3/DeviceList/12/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_DH));
 Config::Set("/NodeList/7/DeviceList/13/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_DH));

 Config::Set("/ChannelList/6/$ns3::PointToPointChannel/Delay", TimeValue(Delay_DH));

//------------------------------------------------------------------------------------------------
 NodeContainer subnetEF; 
 subnetEF.Add(routers.Get(4));
 subnetEF.Add(routers.Get(5));

 DataRate Speed_EF(speedEF);
 Time Delay_EF(delayEF);

 NetDeviceContainer subnetEF_Devices = p2p.Install(subnetEF);
 address.SetBase("10.1.8.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetEF_Interfaces = address.Assign(subnetEF_Devices);

 Config::Set("/NodeList/4/DeviceList/14/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_DH));
 Config::Set("/NodeList/5/DeviceList/15/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_DH));

 Config::Set("/ChannelList/7/$ns3::PointToPointChannel/Delay", TimeValue(Delay_DH));

//------------------------------------------------------------------------------------------------ 
 NodeContainer subnetEI; 
 subnetEI.Add(routers.Get(4));
 subnetEI.Add(routers.Get(8));

 DataRate Speed_EI(speedEI);
 Time Delay_EI(delayEI);

 NetDeviceContainer subnetEI_Devices = p2p.Install(subnetEI);
 address.SetBase("10.1.9.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetEI_Interfaces = address.Assign(subnetEI_Devices);

 Config::Set("/NodeList/4/DeviceList/16/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_EI));
 Config::Set("/NodeList/8/DeviceList/17/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_EI));

 Config::Set("/ChannelList/8/$ns3::PointToPointChannel/Delay", TimeValue(Delay_EI));

//------------------------------------------------------------------------------------------------
 NodeContainer subnetFG; 
 subnetFG.Add(routers.Get(5));
 subnetFG.Add(routers.Get(6));

 DataRate Speed_FG(speedFG);
 Time Delay_FG(delayFG);

 NetDeviceContainer subnetFG_Devices = p2p.Install(subnetFG);
 address.SetBase("10.1.10.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetFG_Interfaces = address.Assign(subnetFG_Devices);

 Config::Set("/NodeList/5/DeviceList/18/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_FG));
 Config::Set("/NodeList/6/DeviceList/19/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_FG));

 Config::Set("/ChannelList/9/$ns3::PointToPointChannel/Delay", TimeValue(Delay_FG));

//------------------------------------------------------------------------------------------------
 NodeContainer subnetFI; 
 subnetFI.Add(routers.Get(5));
 subnetFI.Add(routers.Get(8));

 DataRate Speed_FI(speedFI);
 Time Delay_FI(delayFI);

 NetDeviceContainer subnetFI_Devices = p2p.Install(subnetFI);
 address.SetBase("10.1.11.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetFI_Interfaces = address.Assign(subnetFI_Devices);

 Config::Set("/NodeList/5/DeviceList/20/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_FI));
 Config::Set("/NodeList/8/DeviceList/21/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_FI));

 Config::Set("/ChannelList/10/$ns3::PointToPointChannel/Delay", TimeValue(Delay_FI));

//------------------------------------------------------------------------------------------------
 NodeContainer subnetGJ; 
 subnetGJ.Add(routers.Get(6));
 subnetGJ.Add(routers.Get(9));

 DataRate Speed_GJ(speedGJ);
 Time Delay_GJ(delayGJ);

 NetDeviceContainer subnetGJ_Devices = p2p.Install(subnetGJ);
 address.SetBase("10.1.12.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetGJ_Interfaces = address.Assign(subnetGJ_Devices);

 Config::Set("/NodeList/6/DeviceList/22/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_GJ));
 Config::Set("/NodeList/9/DeviceList/23/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_GJ));

 Config::Set("/ChannelList/11/$ns3::PointToPointChannel/Delay", TimeValue(Delay_GJ));

//------------------------------------------------------------------------------------------------
 NodeContainer subnetHJ; 
 subnetHJ.Add(routers.Get(7));
 subnetHJ.Add(routers.Get(9));

 DataRate Speed_HJ(speedHJ);
 Time Delay_HJ(delayHJ);

 NetDeviceContainer subnetHJ_Devices = p2p.Install(subnetHJ);
 address.SetBase("10.1.13.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetHJ_Interfaces = address.Assign(subnetHJ_Devices);

 Config::Set("/NodeList/7/DeviceList/24/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_HJ));
 Config::Set("/NodeList/9/DeviceList/25/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_HJ));

 Config::Set("/ChannelList/12/$ns3::PointToPointChannel/Delay", TimeValue(Delay_HJ));

//------------------------------------------------------------------------------------------------
 NodeContainer subnetIJ; 
 subnetIJ.Add(routers.Get(8));
 subnetIJ.Add(routers.Get(9));

 DataRate Speed_IJ(speedIJ);
 Time Delay_IJ(delayIJ);

 NetDeviceContainer subnetIJ_Devices = p2p.Install(subnetIJ);
 address.SetBase("10.1.14.0", "255.255.255.0");

 Ipv4InterfaceContainer subnetIJ_Interfaces = address.Assign(subnetIJ_Devices);

 Config::Set("/NodeList/8/DeviceList/26/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_IJ));
 Config::Set("/NodeList/9/DeviceList/27/$ns3::PointToPointNetDevice/DataRate", DataRateValue(Speed_IJ));

 Config::Set("/ChannelList/13/$ns3::PointToPointChannel/Delay", TimeValue(Delay_IJ));

//////////////////////////////////////////////////////////////////////////////////////////////////

 Ipv4Address serverAddress(subnetAB_Interfaces.GetAddress(0));
 uint16_t serverPort = 4500;

 UdpEchoServerHelper server(serverPort);
 
 ApplicationContainer serverApp = server.Install(routers.Get(0));
 serverApp.Start(Seconds(1.0));
 serverApp.Stop(Seconds(10.0));

 UdpEchoClientHelper HostEcho(serverAddress, serverPort);

 ApplicationContainer HostEchoApp = HostEcho.Install(routers.Get(9));
 HostEchoApp.Start(Seconds(1.0));
 HostEchoApp.Stop(Seconds(10.0));

 Ipv4GlobalRoutingHelper::PopulateRoutingTables();

 Time::SetResolution(Time::NS);
 LogComponentEnable("UdpEchoClientApplication", LOG_LEVEL_INFO);
 LogComponentEnable("UdpEchoServerApplication", LOG_LEVEL_INFO);

/************************************************************************************************/
 MobilityHelper mobility;
 mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
 mobility.Install(routers);

 AnimationInterface anim("myTopology_animation.xml");
 anim.SetConstantPosition(routers.Get(0), 2.0, 5.0);
 anim.SetConstantPosition(routers.Get(1), 7.0, 3.0);
 anim.SetConstantPosition(routers.Get(2), 13.0, 2.5);
 anim.SetConstantPosition(routers.Get(3), 18.0, 4.0);
 anim.SetConstantPosition(routers.Get(4), 3.0, 10.0);
 anim.SetConstantPosition(routers.Get(5), 8.0, 7.5);
 anim.SetConstantPosition(routers.Get(6), 14.5, 6.0);
 anim.SetConstantPosition(routers.Get(7), 18.5, 9.0);
 anim.SetConstantPosition(routers.Get(8), 10.0, 12.0);
 anim.SetConstantPosition(routers.Get(9), 16.0, 13.0);

/************************************************************************************************/
 Simulator::Stop(Seconds (10.0));
 Simulator::Run();
 Simulator::Destroy();

}
