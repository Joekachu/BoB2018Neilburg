#pragma config(Motor,  port1,           left,          tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           right,         tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void drive()
{
	motor[left] = vexRT[Ch3];
	motor[right] = vexRT[Ch2];
}
task main()
{
	while(true)
	{
		drive();
	}


}
