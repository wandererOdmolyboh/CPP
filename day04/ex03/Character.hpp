/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wanderer <wanderer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:24:35 by wanderer          #+#    #+#             */
/*   Updated: 2019/09/27 16:28:36 by wanderer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# define BUFF_SIZE 4
#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        int         count_elm;
        AMateria    *inventory[BUFF_SIZE];
        std::string name;
    public:
        Character(/* args */);
        Character(std::string name);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};




#endif