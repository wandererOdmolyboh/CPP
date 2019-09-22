/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmolyboh <dmolyboh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 09:23:37 by dmolyboh          #+#    #+#             */
/*   Updated: 2019/09/01 11:40:55 by dmolyboh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (int argc, char **argv)
{
	string str;
	ifstream infile;
	string param1, param2;

	if (argc == 4)
	{
		str = argv[1];
		param1 = argv[2];
		param2 = argv[3];
		infile.open(str);
		if (infile.fail())
		{
			cout << "Not found file" << endl;
			return(0);
		}
		str = str + ".replace"; 
		remove(str.data());
		ofstream ofile(str, ios::app);
		while(!infile.eof())
		{
			getline(infile, str);
			if (param1 != "" && param1 != param2)
				while ((str.find(param1) != std::string::npos))
					str.replace(str.find(param1), param1.length(), param2);
			ofile << str + '\n';
		}
		infile.close();
	}
	else
		cout << "Usage : " << argv[0] << "params 1 and params 2" << endl;
	return (0);
}
