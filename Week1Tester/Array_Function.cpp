



int Largest(int Array[]) {

	//Largest value start here
	int largest = Array[0];
	int size = sizeof(Array);

	for (int i = 1; i < size; ++i)
	{

		if (largest < Array[i]) 
		{
			largest = Array[i];
		}

	}

	return largest;
}