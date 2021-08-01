####################################################################################################################################################
numero variacao = 0
numero vezesParaGirar = 0
numero vezesParaSairDaVisao = 0
numero achouBolinha = 0
numero tentativasPegarBolinha = 0
numero numeroBolas=0
numero leitura = 0
numero sensorBaixo = 0
numero terminouBolinhas = 0#0->nao 1->sim
numero numeroBolasMax = 4
numero repetir = 0
numero umaVez = 0


tarefa procurarEcentralizarBolinha {
#enquanto(variacao < 20 ou (QUANDO VER PAREDE PRETA))farei{
  #enquanto nao tem bolinha na frente
  variacao = 0
  enquanto(variacao < 14)farei{
    #direita(500)
    rotacionar(1000, 1)
    se(ultra(1)!=1000)entao{
      variacao=ultra(1)-ultra(3)
    }
    se(variacao>300)entao{
      variacao = 0
    }
    escrever(1, virartexto(variacao))
  }
  parar()
  enquanto(ultra(3)>10)farei{
    frente(500)
  }
  parar()

  ## virar a direita ate a bolinha sair do sensor 
  enquanto(ultra(3)<(15))farei{
    direita(500)
    esperar(5)
  }

  #quanto que eu preciso virar pra esquerda pra centralizar a bolinha
  #pode ser sla 
  esquerda(500)
  esperar(1300)
 
}

tarefa pegarBolinha {
  #vai pra tras pra pegar a bonita
  enquanto(ultra(3)< 30)farei{
    tras(200)
  }
  parar()
  baixar(1500)
  velocidadeatuador(80)
  frente(200)
  esperar(500)
  frente(300)
  esperar(200)
  parar()
  levantar(2000)
  velocidadeatuador(80)
  tras(200)
  esperar(500)
  tras(300)
  esperar(200)
}
tarefa terminouPegarBolinha {
  se(numeroBolas>=numeroBolasMax)entao{
    terminouBolinhas = 1
  }senao{
    terminouBolinhas = 0
  }
}
tarefa levarBola{
  se(direcao()>180)entao{
    enquanto(direcao()>3)farei{
      direita(1000)
    }
  }

 	se(direcao()<180)entao{
    enquanto(direcao()>3)farei{
      esquerda(1000)
    }	
	}
  se(ultra(1)==1000 ou ultra(2)==1000)entao{
    enquanto(direcao()<170 ou direcao()>180)farei{
      rotacionar(1000,180)
    }
	}
  # ver se realmente precisa desse leitura == 0 
  leitura=0	
  enquanto(leitura==0)farei{
    variacao = ultra(1)-ultra(3)
	#ver o sensor de cima para diferenciar bolinha de lugar de por bolinha 
###########################################################################################
	# Essa parte ve se a bolinha ta na frente ou a parede na hora de olhar 
	#tentar fazer algo do tipo se ele ver a bolinha da um chutao nela pra sair do caminho (ainda por fazer)
    se(variacao<20 ou (ultra(3)<10 e ultra(1)> 100))entao{
      #beleza fazer as coisas da parede
      enquanto(ultra(3)>9)farei{
        frente(300)
      }
       rotacionar(1000,90)
      se(umaVez==0)entao{
      variacao = ultra(1)-ultra(3)
        se(variacao<20)entao{
            rotacionar(1000,180)
        } 
      }
     umaVez=umaVez+1
    }senao{
      enquanto(ultra(3)>10)farei{
        frente(300)
      }
      sensorBaixo=ultra(3)
      frente(300)
      parar()
		  esperar(500)
		  #se for bolinha
		  se((ultra(3)-sensorBaixo)>1)entao{
        enquanto(ultra(3)>9)farei{
          frente(300)
        }
        rotacionar(1000,90)
      }senao{
        sensorBaixo=ultra(3)
        rotacionar(100,5)
        se(ultra(3)>sensorBaixo)entao{
          rotacionar(100,negativo(5))
          parar()
          rotacionar(1000,45)
          # vai pra frente ate achar parede e dps vai pra frente um pouco pra tacar a bolinha
          enquanto(ultra(3)>6)farei{
            frente(250)
          }
          tras(200)
          esperar(1500)
          rotacionar(1000,negativo(90))
        }senao{
          rotacionar(100,negativo(5))
          parar()
          rotacionar(1000,negativo(45))
          # vai pra frente ate achar parede e dps vai pra frente um pouco pra tacar a bolinha
          enquanto(ultra(3)>6)farei{
            frente(250)
          }	
          tras(200)
          esperar(1500)
          rotacionar(1000,(90))
          # procura atÃ© achar  o ponto cego e vai pra la e repete o processo ainda n executado
        }
        frente(150)
        esperar(500)
        baixar(1500)
        velocidadeatuador(80)
        esperar(1000)
        levantar(2000)
        velocidadeatuador(80)
        numeroBolas=numeroBolas+1
        leitura=1
        umaVez=0	
        rotacionar(1000,(90))
        terminouPegarBolinha()
      }
    }
  }#fecha o leitura==0 so nao sei se vou ter que usar isso ainda      
}	

tarefa levarPreto{
     enquanto(leitura==0)farei{
    variacao = ultra(1)-ultra(3)
	#ver o sensor de cima para diferenciar bolinha de lugar de por bolinha 
###########################################################################################
	# Essa parte ve se a bolinha ta na frente ou a parede na hora de olhar 
	#tentar fazer algo do tipo se ele ver a bolinha da um chutao nela pra sair do caminho (ainda por fazer)
    se(variacao<20 ou (ultra(3)<10 e ultra(1)> 100))entao{
      #beleza fazer as coisas da parede
      enquanto(ultra(3)>9)farei{
        frente(300)
      }
      rotacionar(1000,90)
    }senao{
      enquanto(ultra(3)>10)farei{
        frente(300)
      }
      sensorBaixo=ultra(3)
      frente(300)
      parar()
		  esperar(500)
		  #se for bolinha
		  se((ultra(3)-sensorBaixo)>1)entao{
        enquanto(ultra(3)>9)farei{
          frente(300)
        }
        rotacionar(1000,90)
      }senao{
        sensorBaixo=ultra(3)
        rotacionar(100,5)
        se(ultra(3)>sensorBaixo)entao{
          rotacionar(100,negativo(5))
          parar()
          rotacionar(1000,45)
          # vai pra frente ate achar parede e dps vai pra frente um pouco pra tacar a bolinha
          enquanto(ultra(3)>6)farei{
            frente(300)
          }
          tras(200)
          esperar(1500)
          leitura=1	
          umaVez=0
        }senao{
          rotacionar(100,negativo(5))
          parar()
          rotacionar(1000,negativo(45))
          # vai pra frente ate achar parede e dps vai pra frente um pouco pra tacar a bolinha
          enquanto(ultra(3)>6)farei{
            frente(300)
          }	
          tras(200)
          esperar(1500)
          leitura=1	
          umaVez=0
          # procura atÃ© achar  o ponto cego e vai pra la e repete o processo ainda n executado
        }
        parar()
    }
  }#fecha o leitura==0 so nao sei se vou ter que usar isso ainda      
}	



}

#SEGUIR LINHA************************************



tarefa modoResgate{
  levantar(2000)
  velocidadeatuador(80)
  #levarPreto()
  enquanto(terminouBolinhas==0)farei{
    procurarEcentralizarBolinha()
    pegarBolinha()
    levarBola()
  }
  esperar(100000)##sair do modo pegar bolinha
}


#SEGUIR LINHA****************************
numero velFrente = 120
numero velCurva = 1000
numero velRotacao = 500
numero numInclinacao = 0
numero verificarCurva = 0
numero temgap = 0

# Funções:

#direita 90
tarefa virarD90{
    enquanto(cor(1) == "PRETO" ou cor(2) == "PRETO")farei{
        frente(velFrente)
        esperar(1)
    }
    se(cor(1) == "VERDE" ou cor(2) == "VERDE")entao{
        enquanto(cor(1) == "VERDE" ou cor(2) == "VERDE")farei{
            frente(velFrente)
            esperar(100)
        }
    } senao {
        se(cor(3)=="PRETO")entao{
            frente(velFrente)
            esperar(1000)
        } senao {
            frente(velFrente)
            esperar(400)
            enquanto(cor(3)!="PRETO")farei{
                direita(velCurva)
                esperar(1)
            }
        }
    }
}
#direita comum
tarefa virarDC{
    frente(30)
    esperar(1)
    direita(velCurva)
    esperar(10)
    temgap = 0
}

#esquerda 90
tarefa virarE90{
    enquanto(cor(4) == "PRETO" ou cor(5) == "PRETO")farei{
        frente(velFrente)
        esperar(1)
    }
    se(cor(4) == "VERDE" ou cor(5) == "VERDE")entao{
        enquanto(cor(4) == "VERDE" ou cor(5) == "VERDE")farei{
            frente(velFrente)
            esperar(100)
        }
    } senao {
        se(cor(3)=="PRETO")entao{
            frente(velFrente)
            esperar(1000)
        } senao {
            frente(velFrente)
            esperar(400)
            enquanto(cor(3)!="PRETO")farei{
                esquerda(velCurva)
                esperar(1)
            }
        }
    }
}
#esquerda comum
tarefa virarEC{
    frente(30)
    esperar(1)
    esquerda(velCurva)
    esperar(10)
    temgap = 0
}

########################### - VERDE - ###########################

# Verde direita
tarefa verdeD{
    enquanto(cor(1) == "VERDE" ou cor(2) == "VERDE")farei{
        frente(velFrente)
        esperar(1)
    }    
        frente(velFrente)
        esperar(500)
        direita(velCurva)
        esperar(800)
    enquanto(cor(3) != "PRETO")farei{
        rotacionar(500, 1)
        verificarCurva = verificarCurva + 1
        se(verificarCurva >= 100)entao{
            enquanto(cor(3) != "PRETO")farei{
                rotacionar(500, negativo(1))
            }
            verificarCurva = 0
            interromper()
        }
    }
}
# Verde esquerda
tarefa verdeE{
    enquanto(cor(4) == "VERDE" ou cor(5) == "VERDE")farei{
        frente(velFrente)
        esperar(1)
    }    
        frente(velFrente)
        esperar(500)
        esquerda(velCurva)
        esperar(800)
    enquanto(cor(3) != "PRETO")farei{
        rotacionar(500, negativo(1))
        verificarCurva = verificarCurva + 1
        se(verificarCurva >= 100)entao{
            enquanto(cor(3) != "PRETO")farei{
                rotacionar(500, 1)
            }
            verificarCurva = 0
            interromper()
        }
    }
}

# Corrigir Angulo
tarefa CorrigirAngulo{
    escrever(3, "Corrigindo angulo...")
    se(direcao()>0 e direcao()<45)entao{
        enquanto(direcao() < 357)farei{
            esquerda(1000)
            esperar(1)
        }
    }
    # linha nos 90
    se(direcao()>45 e direcao()<90)entao{
        enquanto(direcao()<90)farei{
            direita(1000)
            esperar(1)
        }
    }
    se(direcao()>93 e direcao()<135)entao{
        enquanto(direcao()>90)farei{
            esquerda(1000)
            esperar(1)
        }
    }
    #linha nos 180
    se(direcao()>135 e direcao()<180)entao{
        enquanto(direcao()<180)farei{
            direita(1000)
            esperar(1)
        }
    }
    se(direcao()>180 e direcao()<225)entao{
        enquanto(direcao()>180)farei{
            esquerda(1000)
            esperar(1)
        }
    }
    #linha nos 270
    se(direcao()>225 e direcao()<270)entao{
        enquanto(direcao()<270)farei{
            direita(1000)
            esperar(1)
        }
    }
    se(direcao()>270 e direcao()<315)entao{
        enquanto(direcao()>270)farei{
            esquerda(1000)
            esperar(1)
        }
    }
    #inclinacao 0
    se(direcao()>315 e direcao()<359)entao{
        enquanto(direcao()>3)farei{
            direita(1000)
            esperar(1)
        }
    }
}
###############################################################################################################


numero estavaCurva = 0
tarefa modoSegueLinha {
    escrever(2, virartexto(numInclinacao))
    se(numInclinacao>600)entao{
        escrever(1, "entrouu")
        frente(velFrente)
        esperar(1000)
        parar()
        
        modoResgate()
    }
# Diminuir velocidade quando detectar subida ou descida
     se(inclinacao()>300) entao{
        numInclinacao = numInclinacao+1
     }
     senao{
        numInclinacao = 0
     }
     se(numInclinacao>10)entao{
        velFrente = 80
        estavaCurva = 1
     }senao{
        velFrente = 120
     }
     se(numInclinacao>500)entao{
        velFrente = 1000
     }

# Curva verde direita
    se(cor(1) == "VERDE" ou cor(2) == "VERDE")entao{
        escrever(1, "VERDE direita")
        frente(velFrente)
        esperar(100)
        se(cor(4) == "VERDE" ou cor(5) == "VERDE")entao{
	        rotacionar(500,180)
        }
        senao {
            verdeD()
        }
    }

# Curva verde esquerda
    se(cor(4) == "VERDE" ou cor(5) == "VERDE")entao{
        escrever(1, "VERDE esquerda")
        frente(velFrente)
        esperar(100)
        se(cor(1) == "VERDE" ou cor(2) == "VERDE")entao{
	        rotacionar(500,180)
        }
        senao {
            verdeE()
        }
    }

# Curva 90 esquerda (caso 1) // curva comum
    se(cor(1) == "PRETO")entao{        
        se(cor(2) == "PRETO")entao{     
            se(cor(1) == "PRETO" e cor(2) == "PRETO") entao{
                escrever(1, "direita 90 1")
			    virarD90()
            }
        }
        senao {
            escrever(1, "direita comum 1")
            enquanto (cor(3) != "PRETO")farei{
                direita(velCurva)
                esperar(1)
            }
            virarDC()
        }
    }
# Curva 90 direita (caso 2) // curva comum
    se(cor(2) == "PRETO")entao{        
        se(cor(1) == "PRETO")entao{     
            se(cor(1) == "PRETO" e cor(2) == "PRETO") entao{
                escrever(1, "direita 90 2")
			    virarD90()
            }
        }
        senao {
            escrever(1, "direita comum 2")
            virarDC()
        }
    }
# Curva 90 esquerda (caso 1) // curva comum
    se(cor(4) == "PRETO")entao{        
        se(cor(5) == "PRETO")entao{     
            se(cor(4) == "PRETO" e cor(5) == "PRETO") entao{
                escrever(1, "esquerda 90 1")
			    virarE90()
            }
        }
        senao {
            escrever(1, "esquerda comum 1")
            virarEC()
        }
    }
# Curva 90 esquerda (caso 2) // curva comum
    se(cor(5) == "PRETO")entao{        
        se(cor(4) == "PRETO")entao{     
            se(cor(4) == "PRETO" e cor(5) == "PRETO") entao{
                escrever(1, "esquerda 90 2")
			    virarE90()
            }
        }
        senao {
            enquanto (cor(3) != "PRETO")farei{
                esquerda(velCurva)
                esperar(1)
            }
            escrever(1, "esquerda comum 2")
            virarEC()
        }
    }

# Cruzamento sem verde (reto)
    se((cor(1)=="PRETO" e cor(2) == "PRETO") e (cor(4)=="PRETO" e cor(5) == "PRETO"))entao{
        escrever(1, "Cruzamento Sem VERDE")
        frente(velFrente)
        esperar(500)
    }

# Desviar Obstáculo
    se(ultra(3)<20 e ((ultra(1)-ultra(3))<30 ou ultra(1)==10000))entao{
        CorrigirAngulo()
        escrever(1, "MDS, OBSTÁCULO DESVIAAAA!!!!!")
        rotacionar(500,45)
        frente(velFrente)
        esperar(1800)
        rotacionar(velRotacao,negativo(45)) 
        frente(150)
        esperar(2000)
        rotacionar(velRotacao,negativo(45)) 
        enquanto(cor(3)!="PRETO")farei{
            frente(150)
        }
    }
#Ver dois verdes
    se(cor(2)=="VERDE" e cor(4)=="VERDE")entao{
        rotacionar(500,180)
  }
#GAP (Corrigir Angulo)
    se((cor(1) == "BRANCO" e cor(5) == "BRANCO") e cor(3) == "BRANCO")entao{
        se(temgap == 50)entao{
            CorrigirAngulo()
            temgap = 0
        }
        senao {
            escrever(3, virartexto(temgap))
            temgap = temgap + 1
        }
    }
    senao {
        temgap = 0
    }
# Ir para frente (reto)
    se((cor(1) == "BRANCO" e cor(5) == "BRANCO") ou (cor(3) == "PRETO"))entao{
        escrever(1, "frente")
        frente(velFrente)
        esperar(1)
    }
}



inicio
  levantar(1500)
  velocidadeatuador(80)
  zerartemporizador()
  enquanto (1==1) farei{
    modoSegueLinha()
  }
fim