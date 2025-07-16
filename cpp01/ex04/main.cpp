/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etom <etom@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:30:40 by etom              #+#    #+#             */
/*   Updated: 2025/07/16 14:30:26 by etom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>



int main(int argc, char **argv)
{
	std::string file_buffer;
	int i;
	int length;
	char c;

	// schecking number of args

	if (argc != 4)
		return (std::cout << "Wrong number of arguments" << std::endl, 1);
	
	std::ifstream in_file(argv[1]);
	if (in_file.is_open())
	{
		std::string out_title = argv[1];
		out_title += ".replace";
		std::ofstream out_file(out_title.c_str());
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		length = s1.length();
		std::string temp;
		while (in_file.get(c))
		{
			if (c == s1[0])
			{
				i = 1;
				temp += c;
				while (i < length)
				{
					in_file.get(c);
					temp += c;
					i++;
				}
				if (!temp.compare(s1))
				{
					out_file << s2;
				}
				else
				{
					while (--i > 0)
					{
						in_file.putback(temp[i]);
					}
					out_file << temp[0];
				}
				temp.clear();
			}
			else
				out_file << c;
		}
		out_file << std::endl;
		return (0);
	}
	return (1);
}