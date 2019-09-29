/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 22:04:27 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/28 22:23:15 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
#define GAME_HPP

class game
{
	private:
		double cur_time;
		double start_time;
		int score;
		int distance;
	public:
		double frame;
		game(/* args */);
		~game();
};

game::game(/* args */)
{
}

game::~game()
{
}


#endif