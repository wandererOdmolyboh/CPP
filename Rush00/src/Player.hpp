/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 22:13:49 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/28 22:16:57 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

#include "Character.hpp"

class Player : public Character
{
	private:
		/* data */
	public:
		Player(/* args */);
		~Player();
	};

Player::Player(/* args */)
{
}

Player::~Player()
{
}


#endif