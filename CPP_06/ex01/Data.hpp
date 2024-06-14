#ifndef DATA_HPP
# define DATA_HPP

class Data
{
	private:
		int i;
	public:
		Data();//									Default Constructor
		Data(int nb);
		Data(const Data &other);//					Copy constructor
		Data&	operator=(const Data &other);//		Copy assignement operator
		~Data();//									Destructor

		int getI();
};

#endif