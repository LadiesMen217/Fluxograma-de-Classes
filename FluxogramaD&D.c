#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("-- Programa criado para ajudar na escolha de sua classe em Dungeons and Dragons 5� Edi��o --\n");
	printf("\nA seguir ser�o feitas diversas perguntas, responda-as digitando o numero da alternativa de sua escolha.\n");
	
	printf("-------------------------------------------------------------------------------");
	
	int resposta1,resposta2,resposta3,resposta4,resposta5,resposta6,resposta7,resposta8,resposta9,resposta10,resposta11,resposta12,resposta13,resposta14,resposta15,resposta16,resposta17,resposta18;
	P1:
	printf("\nComo voc� reage ao perigo?"
	"\n1-Resolvo ele de uma dist�ncia segura."													//P17
	"\n2-N�o ligo pular de barriga nele."
	"\nResposta:");
	scanf("%d", &resposta1);
			
		switch (resposta1) 
		{
			case 1: //Pergunta 1
				P2:
				system("cls");	
				printf("\nNo que voc� confia mais?"
					   "\n1-Habilidade."
					   "\n2-Magia."
					   "\nResposta:");
					   scanf("%d", &resposta2);
					   
					   switch (resposta2) 
					   {
					   		case 1: //Pergunta 1.2
					   			P4:
					   			system("cls");	
					   			printf("\nQu�o bom voc� � em manter sil�ncio?"
					   			       "\n1-*sil�ncio*"
					   			       "\n2-Eu n�o sei, nunca tentei!"
					   			       "\nResposta:");
					   			       scanf("%d", &resposta4);
					   			       
					   			       switch (resposta4)
					   			       {
					   			       		case 1: //Pergunta 1.2.1
					   			       			P10:
					   			       			system("cls");	
												printf("\nVoc� possuiu algum animal de estima��o?"
					   			       			       "\n1-Meus melhores amigos s�o feras vorazes."
					   			       			       "\n2-Tipo um,... porquinho da �ndia?"
					   			       			       "\nResposta:");
					   			       			       scanf("%d", &resposta9);
					   			       			       
					   			       			       switch (resposta9)
					   			                       {
					   			                       		P16:
					   			       		                case 1: //Pergunta 1.2.1.1        Classe: RANGER
					   			       		                   system("cls");
															   printf("\nVoc� combina com:\n\nRANGER: s�o ca�adores furtivos e altamente especializados"
															   " das fronteiras selvagens. Uma mistura de magia da natureza e treinamento marcial faz dos rangers"
															   " formid�veis combatentes que s�o mortais a qualquer dist�ncia.\n\n");
					   			       			               break;
					   			       		                case 2: //Pergunta 1.2.1.1
					   			       						   P11:
					   			       						   system("cls");	
															   printf("\nEu fui treinado para matar usando..."
					   			       						          "\n1-Meu c�rebro. E talvez veneno."
					   			       						          "\n2-Qualquer coisa que espeta, fatia ou esmaga."
					   			       						          "\nResposta:");
					   			       						          scanf("%d", &resposta10);
					   			       						          
					   			       						          switch (resposta10)
					   			       						          {
					   			       						          	  P17:
					   			       						          	  case 1: //Pergunta 1.2.1.1.1        Classe: LADINO
					   			       						          	    system("cls");
					   			       						          	    printf("\nVoc� combina com:\n\nLADINO: s�o oportunistas h�beis e engenhosos." 
																			" Eles executam seus planos com ast�cia e precis�o," 
																		    " muitas vezes embalando seus inimigos em uma falsa sensa��o de seguran�a antes de atacarem.\n\n");
																			break;
																		  case 2: //Pergunta 1.2.1.1.1        Classe: GUERREIRO
																		  	P15:
																		    system("cls");
																		    printf("\nVoc� combina com:\n\nGUERREIRO: s�o mestres do combate marcial." 
																			" Enquanto todos os guerreiros s�o treinados nos fundamentos de cada estilo de luta," 
																			" cada guerreiro tamb�m tem uma especialidade que os torna excepcionalmente mortais.\n\n");
																			break;
																		  default: //Pergunta 1.2.1.1.1
																		    system("cls");
																		    printf("\nIt was at this moment that he knew: he fucked up...\n");
																			goto P11;	   
																	  }
					   			       			               break;
					   			       		                default: //Pergunta 1.2.1.1
					   			       		                   system("cls");
					   			       			               printf("\nResponde direito caraio\n");
					   			       			               goto P10;
										               }
					   			       			break;
					   			       		case 2: //Pergunta 1.2.1        Classe: BARDO
					   			       			B1:
					   			       			system("cls");	
												printf("\nVoc� combina com:\n\nBARDO: s�o m�gicos musicais perspicazes que tecem feiti�os com can��es."
					   			       			"Sua maior for�a � sua versatilidade. Enquanto a maioria prefere ficar � margem,"
												" alguns s�o inspirados por can��es de valor para pegar uma espada e participar da briga.\n\n");
					   			       			break;
					   			       		default: //Pergunta 1.2.1
					   			       		    system("cls");
					   			       			printf("\nAh brother se ta de brincadeira n�?\n");
					   			       			goto P4;
										}
					   			break;
					   		case 2: //Pergunta 1.2
					   			P5:
					   			system("cls");	
					   			printf("\nEu quero..."
					   			       "\n1-Stamina m�gica por dias!"
					   			       "\n2-Flexibilidade."
					   			       "\n3-Uma ou duas bombas nucleares sobrenaturais..."
					   			       "\nResposta:");
					   			       scanf("%d", &resposta5);
					   			       
					   			       switch (resposta5)
					   			       {
					   			       		case 1: //Pergunta 1.2.2        Classe: WARLOCK
					   			       		    W1:
					   			       		    system("cls");	
					   			       			printf("\nVoc� combina com:\n\nWARLOCK: s�o buscadores ambiciosos de segredos arcanos"
												" que tiram poder de alian�as e pactos com seres sobrenaturais."
												" Em combate, alguns warlocks contam com feiti�os de longo alcance para detonar inimigos," 
												" enquanto outros invocam armas arcanas para se envolver em combates corpo-a-corpo.\n\n");
					   			       			break;
					   			       		case 2: //Pergunta 1.2.2
					   			       			P12:
					   			       			system("cls");	
												printf("\nVoc� � do tipo acad�mico?"
													   "\n1-N�o necessariamente."
											           "\n2-Sou um rato de biblioteca."
											           "\nResposta:");
											           scanf("%d", &resposta11);
											           
											           switch (resposta11)
					   			        				{
					   			       						case 1: //Pergunta 1.2.2.1
					   			       						    system("cls");
					   			       							printf("\nVoc� � religioso?"
					   			       								   "\n1-N�o, meu poder vem de dentro de mim."
					   			       								   "\n2-N�o, meu poder vem dos meus solos justos de ala�de."
					   			       								   "\n3-Defina 'religioso'"
					   			       								   "\nResposta:");
					   			       								   scanf("%d", &resposta12);
					   			       								   
					   			       								   switch (resposta12)
					   			        				                {
																		
					   			       						                case 1: //Pergunta 1.2.2.1.1
					   			       							                goto F1;
					   			       							                break;
					   			       						                case 2: //Pergunta 1.2.2.1.1
					   			       							                goto B1;
					   			       							                break;
					   			       							            case 3: //Pergunta 1.2.2.1.1
					   			       							                P13:
					   			       							                system("cls");	
																				printf("\nDe onde vem o seu poder?"
					   			       							                       "\n1-Um bizarro pacto com um ser extradimensional."
					   			       							                       "\n2-Minha conex�o com a natureza."
					   			       							                       "\n3-Dos deuses."
					   			       							                       "\nResposta:");
					   			       							                       scanf("%d", &resposta13);
					   			       							                       
					   			       							                       switch (resposta13)
					   			        				                                {
					   			       						                                case 1: //Pergunta nem to contando mais
					   			       							                                goto W1;
					   			       							                                break;
					   			       						                                case 2: //        Classe: DRUIDA
					   			       						                                	P14:
					   			       						                                    system("cls");
					   			       							                                printf("\nVoc� combina com:\n\nDRUIDA: s�o seguidores de antigas tradi��es que buscam unidade com as for�as primordiais do mundo natural." 
																									   " Essas tradi��es conferem aos druidas a capacidade de fazer coisas incr�veis, como se transformar em animais, ou chamar"
																									   " aterrorizantes poderes elementais sobre as cabe�as de seus inimigos.\n\n");
					   			       							                                break;
					   			       							                            case 3: //Pergunta nem to contando mais
					   			       							                                goto C1;
																								break;
					   			       						                                default: //Pergunta nem to contando mais
					   			       						                                    system("cls");
					   			       							                                printf("\nTente responder de novo, quando tiver um c�rebro.");
					   			       							                                goto P13;
														                                }
														                }
					   			       							break;
					   			       						case 2: //Pergunta 1.2.2.1        Classe: MAGO
					   			       						    system("cls");
					   			       							printf("\nVoc� combina com:\n\nMAGO: s�o s�bios eruditos arcanos. Seus estudos lhes d�o insights sobre diversas" 
																" e poderosas escolas de magia, permitindo que eles invoquem bolas de fogo explosivas," 
																" levantem ex�rcitos mortos-vivos e manipulem o tecido do pr�prio tempo.\n\n");
					   			       							break;
					   			       						default: //Pergunta 1.2.2.1
					   			       						    system("cls");
					   			       							printf("\nQuer ajuda pra digitar 1 ou 2?");
					   			       							goto P12;
														}
					   			       			break;
					   			       		case 3: //Pergunta 1.2.2        Classe: FEITI�EIRO
					   			       			F1:
					   			       			system("cls");
												printf("\nVoc� combina com:\n\nFEITI�EIRO: nascem com poder m�gico cru em seu sangue." 
												" O que falta em conhecimento, eles compensam com sua habilidade inata de manipular" 
												" feiti�os para atender �s suas necessidades.\n\n");
					   			       			break;
					   			       		default: //Pergunta 1.2.2
					   			       		    system("cls");
					   			       			printf("\nAh brother se ta de brincadeira n�?\n");
					   			       			goto P5;
										}
					   			break;
					   		default: //Pergunta 1.2
					   		    system("cls");
					   			printf("\nTa de brinquedo que tu n consegue responder direito?\n");
					   			goto P2;
					   }
					   
				break;
			case 2: //Pergunta 1
				P3:
				system("cls");
				printf("\nVoc� � mais forte ou �gil?"
					   "\n1-Forte."
					   "\n2-�gil."
					   "\nResposta:");
					   scanf("%d", &resposta3);
					   
					   switch (resposta3)
					   {
					   		case 1: //Pergunta 1.3
					   			P7:
					   			system("cls");	
								printf("\nVoc� � bom com os deuses?"
					   			       "\n1-Meh"
					   			       "\n2-Eu tenho eles na discagem r�pida"
					   			       "\nResposta:");
					   			       scanf("%d", &resposta6);
					   			       
					   			       switch (resposta6) 
					   			       {
					   			       		case 1: //Pergunta 1.3.1
					   			       			P8:
					   			       			system("cls");	
												printf("\nVoc� � suscet�vel � entrar em f�ria?"
					   			       				   "\n1-N�o mais que o pr�ximo aventureiro."
					   			       				   "\n2-Rrrrrrraaaaagghhhh!!!"
					   			       				   "\nResposta:");
					   			       				   scanf("%d", &resposta8);
					   			       				   
					   			       				   switch (resposta8)
					   			        				{
					   			       						case 1: //Pergunta 1.3.1.1
					   			       						    system("cls");
					   			       							printf("\nQu�o legal seria se transformar em um urso?"
					   			       								   "\n1-Legal pra caralho!"
					   			       								   "\n2-Eu tenho alergia."
					   			       								   "\nResposta:");
					   			       								   scanf("%d", &resposta14);
					   			       								   
					   			       								   switch (resposta14)
					   			       								   {
					   			       								   		case 1:
					   			       								   			goto P14;
					   			       								   		case 2:
					   			       								   			goto P15;
																			 }
					   			       							break;
					   			       						case 2: //Pergunta 1.3.1.1        Classe: B�RBARO
					   			       						    system("cls");
					   			       							printf("\nVoc� combina com:\n\nB�RBARO: s�o guerreiros selvagens que abra�am sua natureza animal e" 
																" aprendem a canalizar a f�ria primitiva. Eles foram envolvidos por suas terras selvagens e evitam a civiliza��o");
					   			       							break;
					   			       						default: //Pergunta 1.3.1.1
					   			       						    system("cls");
					   			       							printf("\nOlha aqui, se tu n�o responder direito, essa porra vai desligar e tu vai ter de responder tudo de novo!");
					   			       							goto P8;
														}
					   			       			break;
					   			       		case 2: //Pergunta 1.3.1
					   			       			P9:
					   			       			system("cls");	
												printf("\nEu vivo minha f�..."
					   			       				   "\n1-Canalizando a natureza e o poder do meu deus."
					   			       				   "\n2-Entregando a JUSTI�A.");
					   			       				   scanf("%d", &resposta7);
					   			       				   
					   			       				   switch (resposta7)
					   			        				{
					   			       						case 1: //Pergunta 1.3.1.2        Classe: CL�RIGO
					   			       						    C1:
					   			       						    system("cls");	
					   			       							printf("\nVoc� combina com:\n\nCL�RIGO: s�o agentes escolhidos dos deuses que canalizam"
																" o poder divino para executar a vontade divina."
																" As habilidades e disposi��es dos cl�rigos s�o t�o diversas quanto os deuses que servem.\n\n");
					   			       							break;
					   			       						case 2: //Pergunta 1.3.1.2        Classe: PALADINO
					   			       						    system("cls");
					   			       							printf("\nVoc� combina com:\n\nPALADINO: s�o guerreiros sagrados dedicados � justi�a."
																" Eles viajam por toda parte combatendo o mal, curando os doentes e os feridos,"
																" e espalhando o bem onde quer que v�o.\n\n");
																break;
					   			       						default: //Pergunta 1.3.1.2
					   			       						    system("cls");
					   			       							printf("\nResponde certo, na moral.");
																goto P9;
														}
												break;
					   			       		default: //Pergunta 1.3.1
					   			       		    system("cls");
					   			       			printf("\nOlha aqui, se tu n�o responder direito, essa porra vai desligar e tu vai ter de responder tudo de novo!");
					   			       			goto P7;
					   			   		}
					   			break;
					   		case 2: //Pergunta 1.3
					   			P18:
					   			system("cls");
					   			printf("\nVoc� vive com filmes de Kung-Fu?"
					   			       "\n1-Bruce Lee � meu �dolo!"
					   			       "\n2-N�o muito."
					   			       "\nResposta:");
					   			       scanf("%d", &resposta15);
					   			       
					   			       switch (resposta15)
					   			       	{
					   			       	    case 1:         //Classe: MONGE
					   			       	    	system("cls");
					   			       	    	printf("\nVco� combina com:\n\nMONGE: s�o eremitas s�bios e disciplinados" 
													   " para aprender a usar seus corpos para manipular energia m�gica. Atrav�s de seu treinamento," 
													   " eles podem aprender a desviar flechas, transformar seus punhos em armas mortais e manipular as leis da natureza.\n\n");
													   break;
											case 2:
												P19:
												system("cls");
												printf("\nVoc� arriscaria sua vida para uma boa hist�ria?"
												       "\n1-Pode apostar que sim!"
												       "\n2-Nah, acho que n�o."
												       "\nResposta:");
												       scanf("%d", &resposta16);
												       
												       switch (resposta16)
												       {
												       		case 1:
												       			goto B1;
												       		case 2:
												       			P20:
												       			system("cls");
												       			printf("\nSou mortal pois..."
												       				   "\n1-Sou um mestre ca�ador."
												       				   "\n2-Sou experiente na arte do combate."
												       				   "\n3-Sou um planejador nato."
												       				   "\nResposta:");
												       				   scanf("%d", &resposta17);
												       				   
												       				   switch (resposta17)
												       				   {
												       				   		case 1: 
												       				   			goto P16;
												       				   		case 2:
												       				   			goto P15;
												       				   		case 3:
												       				   			P21:
												       				   			system("cls");
												       				   			printf("\nMeu planejamentos geralmente involvem..."
												       				   				   "\n1-T�ticas de manto e punhal."
												       				   				   "\n2-Me aliando com elementos sombrios e estranhos."
												       				   				   "\nResposta:");
												       				   				   scanf("%d", &resposta18);
												       				   				   
												       				   				   switch (resposta18)
												       				   				   {
												       				   				   		case 1: 
												       				   				   			goto P17;
												       				   				   		case 2:
												       				   				   			goto W1;
												       				   				   		default:
															   									printf("\nResposta inv�lida!");
															   									goto P21;
																						}
																			default:
															   					printf("\nResposta inv�lida!");
																				goto P20;				 
																		}
												       		default:
															   printf("\nResposta inv�lida!");
															   goto P19;
													   }
											default:
												printf("\nResposta inv�lida!");
												goto P18;		       		
										}
					   			break;
					   		default: //Pergunta 1.3
					   		    system("cls");
					   			printf("\nTa de brinquedo que tu n consegue responder direito?\n");
					   			goto P3;
					   }
				break;
			default: //Pergunta 1
			    system("cls");
				printf("\nResponda com 1 ou 2 sua jamanta.\n");
				goto P1;
		}		
system("PAUSE");
}
