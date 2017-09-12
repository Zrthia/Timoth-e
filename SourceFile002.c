
task main()
{
	motor(motorleft)= 50;
	motor(motorright)=50;

	// this is not a dog;
	while(SensorValue(buttonAny) == 1)
	{
		motor(motorleft)= -50;
		motor(motorright)= -50;
		motor(motorleft)= 50;
		wait1Msec(2000);
		motor(motorleft)= -50;
		motor(motorright)= -50;

}
