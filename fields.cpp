
#include "player.h"
#include "field.h"
field field1("Вперед","1");
field field2("ул.Житная","0",60,2);
field field3("Общественная казна","1");
field field4("ул.Нагатинская","0",60,4);
field field5("Подоходный налог","1");
field field6("Римская железная дорога","0",200,25);
field field7("Варшавское шоссе","0",100,6);
field field8("Шанс","1");
field field9("ул.Огарева","0",100,6);
field field10("ул.Первая Парковая","0",120,8);
field field11("Простое посещение","1");
field field12("ул.Полянка","0",140,10);
field field13("Электростанция","0",150,4);
field field14("ул.Сретенка","0",140,10);
field field15("Ростовская набережная","0",160,12);
field field16("Курская железная дорога","0",200,25);
field field17("Рязанский проспект","0",180,14);
field field18("Общественная казна","1");
field field19("ул.Вавилова","0",180,14);
field field20("Рублевское шоссе","0",200,16);
field field21("Бесплатная стоянка","1");
field field22("ул.Тверская","0",220,18);
field field23("Шанс","1");
field field24("ул.Пушкинская","0",220,18);
field field25("Площадь Маяковского","0",240,20);
field field26("Казанская железная дорога","0",200,25);
field field27("ул.Грузинский Вал","0",260,22);
field field28("ул.Чайковского","0",260,22);
field field29("Водопровод","0",150,4);
field field30("Смоленская площадь","0",280,24);
field field31("Отправляйтесь в тюрьму","1");
field field32("ул.Щусева","0",300,26);
field field33("Гоголевский бульвар","0",300,26);
field field34("Общественная казна","1");
field field35("Кутузовский проспект","0",320,28);
field field36("Ленинградская железная дорога","0",200,25);
field field37("Шанс","1");
field field38("ул.Малая Бронная","0",350,35);
field field39("Сверхналог","1");
field field40("ул.Арбат","0",400,50);
	
	void player::activityInField(int num){
			switch(pos){
				case 1:{
					cout<<"'"<<field1.getName()<<"'"<<endl; 
					cout<<"На этом поле ничего не происходит"<<endl;
					break;}
				case 2:{	
					cout<<"'"<<field2.getName()<<"'"<<endl;
					switch(num){
						case 1: {
							if(field2.checkForOwner(player1.getNameOfPlayer())==0){
								cout<<"Этим участком никто не владеет"<<endl;
								cout<<"Игрок "<<player1.getNameOfPlayer()<<"вы имеете на счету "<<player1.getMoney()<<" рублей"<<endl;
								cout<<"Купить участок?"<<endl;
								int answer;
								cout<<"1)Да"<<endl;
								cout<<"2)Нет"<<endl;
								switch(answer){
									case 1:{
										player1.setMoney(field2.getPriceOfField()*(-1));
										field2.setNameOfOwner(player1.getNameOfPlayer());
										break;
									}
								}
							}
							break;
						}
					} 
					break;}
				case 3: cout<<"'"<<field3.getName()<<"'"<<endl;break;
				case 4: {	
					cout<<"'"<<field4.getName()<<"'"<<endl;
					switch(num){
						case 1: {
							if(field4.checkForOwner(player1.getNameOfPlayer())==0){
								cout<<"Этим участком никто не владеет"<<endl;
								cout<<"Игрок "<<player1.getNameOfPlayer()<<"вы имеете на счету "<<player1.getMoney()<<" рублей"<<endl;
								cout<<"Купить участок?"<<endl;
								int answer;
								cout<<"1)Да"<<endl;
								cout<<"2)Нет"<<endl;
								switch(answer){
									case 1:{
										player1.setMoney(field4.getPriceOfField()*(-1));
										field4.setNameOfOwner(player1.getNameOfPlayer());
										break;
									}
								}
							}
							break;
						}
					} 
					break;}
				case 5: cout<<"'"<<field5.getName()<<"'"<<endl;break;
				case 6: {	
					cout<<"'"<<field6.getName()<<"'"<<endl;
					switch(num){
						case 1: {
							if(field6.checkForOwner(player1.getNameOfPlayer())==0){
								cout<<"Этим участком никто не владеет"<<endl;
								cout<<"Игрок "<<player1.getNameOfPlayer()<<"вы имеете на счету "<<player1.getMoney()<<" рублей"<<endl;
								cout<<"Купить участок?"<<endl;
								int answer;
								cout<<"1)Да"<<endl;
								cout<<"2)Нет"<<endl;
								switch(answer){
									case 1:{
										player1.setMoney(field6.getPriceOfField()*(-1));
										field6.setNameOfOwner(player1.getNameOfPlayer());
										break;
									}
								}
							}
							break;
						}
					} 
					break;}
				case 7: {	
					cout<<"'"<<field7.getName()<<"'"<<endl;
					switch(num){
						case 1: {
							if(field7.checkForOwner(player1.getNameOfPlayer())==0){
								cout<<"Этим участком никто не владеет"<<endl;
								cout<<"Игрок "<<player1.getNameOfPlayer()<<"вы имеете на счету "<<player1.getMoney()<<" рублей"<<endl;
								cout<<"Купить участок?"<<endl;
								int answer;
								cout<<"1)Да"<<endl;
								cout<<"2)Нет"<<endl;
								switch(answer){
									case 1:{
										player1.setMoney(field7.getPriceOfField()*(-1));
										field7.setNameOfOwner(player1.getNameOfPlayer());
										break;
									}
								}
							}
							break;
						}
					} 
					break;}
				case 8: cout<<"'"<<field8.getName()<<"'"<<endl;break;
				case 9: {	
					cout<<"'"<<field9.getName()<<"'"<<endl;
					switch(num){
						case 1: {
							if(field9.checkForOwner(player1.getNameOfPlayer())==0){
								cout<<"Этим участком никто не владеет"<<endl;
								cout<<"Игрок "<<player1.getNameOfPlayer()<<"вы имеете на счету "<<player1.getMoney()<<" рублей"<<endl;
								cout<<"Купить участок?"<<endl;
								int answer;
								cout<<"1)Да"<<endl;
								cout<<"2)Нет"<<endl;
								switch(answer){
									case 1:{
										player1.setMoney(field9.getPriceOfField()*(-1));
										field9.setNameOfOwner(player1.getNameOfPlayer());
										break;
									}
								}
							}
							break;
						}
					} 
					break;}
				case 10: {	
					cout<<"'"<<field10.getName()<<"'"<<endl;
					switch(num){
						case 1: {
							if(field10.checkForOwner(player1.getNameOfPlayer())==0){
								cout<<"Этим участком никто не владеет"<<endl;
								cout<<"Игрок "<<player1.getNameOfPlayer()<<"вы имеете на счету "<<player1.getMoney()<<" рублей"<<endl;
								cout<<"Купить участок?"<<endl;
								int answer;
								cout<<"1)Да"<<endl;
								cout<<"2)Нет"<<endl;
								switch(answer){
									case 1:{
										player1.setMoney(field10.getPriceOfField()*(-1));
										field10.setNameOfOwner(player1.getNameOfPlayer());
										break;
									}
								}
							}
							break;
						}
					} 
					break;}
				case 11: cout<<"'"<<field11.getName()<<"'"<<endl;break;
				case 12: {	
					cout<<"'"<<field12.getName()<<"'"<<endl;
					switch(num){
						case 1: {
							if(field12.checkForOwner(player1.getNameOfPlayer())==0){
								cout<<"Этим участком никто не владеет"<<endl;
								cout<<"Игрок "<<player1.getNameOfPlayer()<<"вы имеете на счету "<<player1.getMoney()<<" рублей"<<endl;
								cout<<"Купить участок?"<<endl;
								int answer;
								cout<<"1)Да"<<endl;
								cout<<"2)Нет"<<endl;
								switch(answer){
									case 1:{
										player1.setMoney(field12.getPriceOfField()*(-1));
										field12.setNameOfOwner(player1.getNameOfPlayer());
										break;
									}
								}
							}
							break;
						}
					} 
					break;}
				case 13: cout<<"'"<<field13.getName()<<"'"<<endl;break;
				case 14: cout<<"'"<<field14.getName()<<"'"<<endl;break;
				case 15: cout<<"'"<<field15.getName()<<"'"<<endl;break;
				case 16: cout<<"'"<<field16.getName()<<"'"<<endl;break;
				case 17: cout<<"'"<<field17.getName()<<"'"<<endl;break;
				case 18: cout<<"'"<<field18.getName()<<"'"<<endl;break;
				case 19: cout<<"'"<<field19.getName()<<"'"<<endl;break;
				case 20: cout<<"'"<<field20.getName()<<"'"<<endl;break;
				case 21: cout<<"'"<<field21.getName()<<"'"<<endl;break;
				case 22: cout<<"'"<<field22.getName()<<"'"<<endl;break;
				case 23: cout<<"'"<<field23.getName()<<"'"<<endl;break;
				case 24: cout<<"'"<<field24.getName()<<"'"<<endl;break;
				case 25: cout<<"'"<<field25.getName()<<"'"<<endl;break;
				case 26: cout<<"'"<<field26.getName()<<"'"<<endl;break;
				case 27: cout<<"'"<<field27.getName()<<"'"<<endl;break;
				case 28: cout<<"'"<<field28.getName()<<"'"<<endl;break;
				case 29: cout<<"'"<<field29.getName()<<"'"<<endl;break;
				case 30: cout<<"'"<<field30.getName()<<"'"<<endl;break;
				case 31: cout<<"'"<<field31.getName()<<"'"<<endl;break;
				case 32: cout<<"'"<<field32.getName()<<"'"<<endl;break;
				case 33: cout<<"'"<<field33.getName()<<"'"<<endl;break;
				case 34: cout<<"'"<<field34.getName()<<"'"<<endl;break;
				case 35: cout<<"'"<<field35.getName()<<"'"<<endl;break;
				case 36: cout<<"'"<<field36.getName()<<"'"<<endl;break;
				case 37: cout<<"'"<<field37.getName()<<"'"<<endl;break;
				case 38: cout<<"'"<<field38.getName()<<"'"<<endl;break;
				case 39: cout<<"'"<<field39.getName()<<"'"<<endl;break;
				case 40: cout<<"'"<<field40.getName()<<"'"<<endl;
			}
		}
