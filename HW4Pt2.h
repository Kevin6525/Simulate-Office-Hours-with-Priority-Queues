//Header file
class probabilityStudent
{
	public:
		//Constructor
		probabilityStudent(double prob = 0.5);
		//Constant function, gets our probability a student comes in
		bool getProbability() const;
	private:
		double probability;
};
class averager
{
	public:
		//Constructor
		averager();
		//Modification function
		void nextValue(double number);
		//Constant functions
		//Return the number of students in office hours
		int totalStudents() const {return count;}
		//Calculate average wait time
		double average() const;
	private:
		double sum;
		int count;
};
class teacher
{
	public:
		//Constructor
		teacher();
		//Modifications functions
		void one_minute();
		void helpStudent(int questionTime);
		//Constant function
		//Check if the teacher is busy/helping a student
		bool isBusy() const {return (timeLeft > 0);}
	private:
		int timeLeft;
};
class student
{
	public:
		//Constructor
		student(int arrival, int question);
		//Return arrival time
		int getTime() const {return arrivalTime;}
		//Return question duration
		int questionDuration() const {return questionTime;}
		//Return priority
		int getPriority() const {return priority;}
	private:
		int arrivalTime;
		int questionTime;
		int priority;
};
//Struct compare for our priority queue
struct compare
{
	bool operator() (const student a, const student b)
	{
		return a.getPriority() > b.getPriority();
	}
};

