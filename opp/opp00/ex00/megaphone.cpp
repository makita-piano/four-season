/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namakita <namakita@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:12:59 by namakita          #+#    #+#             */
/*   Updated: 2021/11/08 19:53:57 by namakita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

void megaphone(int argc, char *argv[]){
    for(int i = 1; i < argc ; i++){
        for(int j = 0; j < (int)strlen(argv[i]);j++){
            std::cout << (char)toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]){
    if (argc == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    megaphone(argc, argv);
    return 0;
}