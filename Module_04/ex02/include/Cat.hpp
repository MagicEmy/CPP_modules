/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlicame <emlicame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:09:27 by emlicame          #+#    #+#             */
/*   Updated: 2023/06/21 17:06:09 by emlicame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AbsAnimal.hpp"

class Cat : public AbsAnimal
{
	public:
			Cat( void );
			Cat(const Cat &source);
			virtual ~Cat( void );
			Cat & operator = (const Cat &source);

			virtual void makeSound( void ) const;	
};

#endif