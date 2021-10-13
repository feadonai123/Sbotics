numero nPodeClaudio = 0

numero tempAngulo1 = 0
numero tempAngulo2 = 0
numero terminarSemUmaBola = 0
numero media = 0
numero mediaAnterior = 0
numero mediaNova = 0

numero b = 0
numero variacao = 0
numero contVariacao = 0
numero variacaoBase = 999
numero pegarAnterior = 0

numero contar = 0
numero ul = 0 

numero timerController = 0

numero ultraParede = 0

numero usarSensor = 0

numero repetirPegarBolinha = 0
numero numeroAnguloPreto = 0

numero anguloInicial = 0

numero rogerio = 0
numero variaRogerio = 0

numero buraco = 0

numero tempProcurarVerde = 0

numero rota = 0
numero cleberson = 0

tarefa zerarvariaveis{
  media=0
  mediaAnterior=0
  mediaNova=0
  ul=0
  b=0
  variacao=0
  pegarAnterior = 0
}

tarefa CorrigirAngulo{
  escrever(2, "Ajustando angulo...")

  se(direcao()>0 e direcao()<23)entao{
    enquanto(direcao() > 1)farei{
      esquerda(500)
    }
  }

  se(direcao()>23 e direcao()<45)entao{
    enquanto(direcao() < 45)farei{
      direita(500)
    }
  }

  se(direcao()>45 e direcao()<68)entao{
    enquanto(direcao() > 45)farei{
      esquerda(500)
    }
  }

  se(direcao()>68 e direcao()<90)entao{
    enquanto(direcao() < 90)farei{
      direita(500)
    }
  }

  se(direcao()>90 e direcao()<112)entao{
    enquanto(direcao() > 90)farei{
      esquerda(500)
    }
  }

  se(direcao()>112 e direcao()<135)entao{
    enquanto(direcao() < 135)farei{
      direita(500)
    }
  }

  se(direcao()>135 e direcao()<158)entao{
    enquanto(direcao() > 135)farei{
      esquerda(500)
    }
  }

  se(direcao()>158 e direcao()<180)entao{
    enquanto(direcao() < 180)farei{
      direita(500)
    }
  }

  se(direcao()>180 e direcao()<203)entao{
    enquanto(direcao() > 180)farei{
      esquerda(500)
    }
  }

  se(direcao()>203 e direcao()<225)entao{
    enquanto(direcao() < 225)farei{
      direita(500)
    }
  }

  se(direcao()>225 e direcao()<248)entao{
    enquanto(direcao() > 225)farei{
      esquerda(500)
    }
  }

  se(direcao()>248 e direcao()<270)entao{
    enquanto(direcao() < 270)farei{
      direita(500)
    }
  }

  se(direcao()>270 e direcao()<293)entao{
    enquanto(direcao() > 270)farei{
      esquerda(500)
    }
  }

  se(direcao()>293 e direcao()<315)entao{
    enquanto(direcao() < 315)farei{
      direita(500)
    }
  }

  se(direcao()>315 e direcao()<338)entao{
    enquanto(direcao() > 315)farei{
      esquerda(500)
    }
  }

  se(direcao()>338 e direcao()<360)entao{
    enquanto(direcao() < 359)farei{
      direita(500)
    }
  }
}

tarefa corrigir45{
  se(direcao()>0 e direcao()<45)entao{
    enquanto(1==1)farei{
      direita(1000)
      se(direcao()>43 e direcao()<47)entao{
        interromper()
      }
    }
  }senao se(direcao()<90 e direcao()>45)entao{
    enquanto(1==1)farei{
      esquerda(1000)
      se(direcao()>43 e direcao()<47)entao{
        interromper()
      }
    }
  }

  se(direcao()>90 e direcao()<135)entao{
    enquanto(1==1)farei{
      direita(1000)
      se(direcao()>133 e direcao()<137)entao{
        interromper()
      }
    }
  }senao se(direcao()<180 e direcao()>135)entao{
    enquanto(1==1)farei{
      esquerda(1000)
      se(direcao()>133 e direcao()<137)entao{
        interromper()
      }
    }
  }

  se(direcao()>180 e direcao()<225)entao{
    enquanto(1==1)farei{
      direita(1000)
      se(direcao()>223 e direcao()<227)entao{
        interromper()
      }
    }
  }senao se(direcao()<270 e direcao()>225)entao{
    enquanto(1==1)farei{
      esquerda(1000)
      se(direcao()>223 e direcao()<227)entao{
        interromper()
      }
    }
  }

  se(direcao()>270 e direcao()<315)entao{
    enquanto(1==1)farei{
      direita(1000)
      se(direcao()>313 e direcao()<317)entao{
        interromper()
      }
    }
  }senao se(direcao()<360 e direcao()>315)entao{
    enquanto(1==1)farei{
      esquerda(1000)
      se(direcao()>313 e direcao()<317)entao{
        interromper()
      }
    }
  }
}
tarefa CorrigirAngulo90{
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
tarefa procurarPerdidaVolta{
  se(cor(3)=="VERDE" ou 
    (((corvermelha(1) > 44 e corvermelha(1) < 45) e
    (corverde(1) > 47 e corverde(1) < 48) e 
    (corazul(1) > 53 e corazul(1) < 55)) e
    ((corvermelha(2) > 44 e corvermelha(2) < 45) e
    (corverde(2) > 47 e corverde(2) < 48) e 
    (corazul(2) > 53 e corazul(2) < 55))) ou
    (((corvermelha(3) > 44 e corvermelha(3) < 45) e
    (corverde(3) > 47 e corverde(3) < 48) e 
    (corazul(3) > 53 e corazul(3) < 55)) e
    ((corvermelha(4) > 44 e corvermelha(4) < 45) e
    (corverde(4) > 47 e corverde(4) < 48) e 
    (corazul(4) > 53 e corazul(4) < 55)))
  )entao{
    enquanto(ultra(3)>9000 e ultra(2)>9000)farei{
      tras(500)
    }
    tras(500)
    esperar(100)
    se(nPodeClaudio==2)entao{
      rota=rota+1
      rotacionar(500, 90)
    }senao{
      rota=rota+1
      rotacionar(500, negativo(90))
    }
    CorrigirAngulo90()
  }senao{
    se(ultra(1)<30)entao{
      escrever(1, "procurarPerdidaIda")
      rota=rota+1
      se(nPodeClaudio==2)entao{
        rotacionar(500, 90)
      }senao{
        rotacionar(500, negativo(90))
      }
      CorrigirAngulo90()
      zerarvariaveis()
    }
  }
}
tarefa procurarPerdidaIda{
  se(cor(3)=="VERDE" ou 
    (((corvermelha(1) > 44 e corvermelha(1) < 45) e
    (corverde(1) > 47 e corverde(1) < 48) e 
    (corazul(1) > 53 e corazul(1) < 55)) e
    ((corvermelha(2) > 44 e corvermelha(2) < 45) e
    (corverde(2) > 47 e corverde(2) < 48) e 
    (corazul(2) > 53 e corazul(2) < 55))) ou
    (((corvermelha(3) > 44 e corvermelha(3) < 45) e
    (corverde(3) > 47 e corverde(3) < 48) e 
    (corazul(3) > 53 e corazul(3) < 55)) e
    ((corvermelha(4) > 44 e corvermelha(4) < 45) e
    (corverde(4) > 47 e corverde(4) < 48) e 
    (corazul(4) > 53 e corazul(4) < 55)))
  )entao{
    enquanto(ultra(3)>9000 e ultra(2)>9000)farei{
      tras(500)
    }
    tras(500)
    esperar(100)
    se(nPodeClaudio==2)entao{
      rota=rota+1
      rotacionar(500, negativo(90))
    }senao{
      rota=rota+1
      rotacionar(500, 90)
    }
    CorrigirAngulo90()
  }senao{
    se(ultra(1)<30)entao{
      rota=rota+1
      se(nPodeClaudio==2)entao{
        rotacionar(500, negativo(90))
      }senao{
        rotacionar(500, 90)
      }
      CorrigirAngulo90()
      zerarvariaveis()
    }
  }
}

tarefa entrarlinhaverm{
  enquanto(cor(2)!="VERDE")farei{
    frente(500)
  }
  enquanto(cor(2)=="VERDE")farei{
    frente(500)
  }
  frente(500)
  esperar(300)
  enquanto(cor(3)!="PRETO")farei{
    rotacionar(500,1)
  }
  #FIMMMMMMMMMMMMMMMMMMMMMMMMM
  escrever(1, "acabou td")
  parar()
  esperar(10000)
}

tarefa sairVerde{
  enquanto(1==1)farei{
    frente(500)
    se(ultra(1)>9000)entao{
      enquanto(cor(2)!="VERDE")farei{
        frente(500)
      }
      entrarlinhaverm()
    }

    se(ultra(2)>9000)entao{
      frente(500)
      esperar(450)
      rotacionar(1000,90)

      CorrigirAngulo90()
      tras(500)
      esperar(200)

      tempProcurarVerde = temporizador()
      enquanto(1==1)farei{
        frente(500)
        se(
          (((corvermelha(1) > 44 e corvermelha(1) < 45) e
          (corverde(1) > 47 e corverde(1) < 48) e 
          (corazul(1) > 53 e corazul(1) < 55)) e
          ((corvermelha(2) > 44 e corvermelha(2) < 45) e
          (corverde(2) > 47 e corverde(2) < 48) e 
          (corazul(2) > 53 e corazul(2) < 55))) ou
          (((corvermelha(3) > 44 e corvermelha(3) < 45) e
          (corverde(3) > 47 e corverde(3) < 48) e 
          (corazul(3) > 53 e corazul(3) < 55)) e
          ((corvermelha(4) > 44 e corvermelha(4) < 45) e
          (corverde(4) > 47 e corverde(4) < 48) e 
          (corazul(4) > 53 e corazul(4) < 55)))
        )entao{
          tras(500)
          esperar(200)
          rotacionar(1000, negativo(90))
          #enquanto(1==1)farei{
            frente(500)
            esperar(300)
            #se(ultra(1)<30)entao{
              #interromper()
            #}
          #}
          interromper()
        }
        se(cor(2)=="VERDE")entao{
          entrarlinhaverm()
        }
      }
    }

    se(ultra(3)>9000)entao{
      frente(500)
      esperar(450)
      rotacionar(1000,negativo(90))

      CorrigirAngulo90()
      tras(500)
      esperar(200)

      enquanto(1==1)farei{
        frente(500)
        se(
          (((corvermelha(1) > 44 e corvermelha(1) < 45) e
          (corverde(1) > 47 e corverde(1) < 48) e 
          (corazul(1) > 53 e corazul(1) < 55)) e
          ((corvermelha(2) > 44 e corvermelha(2) < 45) e
          (corverde(2) > 47 e corverde(2) < 48) e 
          (corazul(2) > 53 e corazul(2) < 55))) ou
          (((corvermelha(3) > 44 e corvermelha(3) < 45) e
          (corverde(3) > 47 e corverde(3) < 48) e 
          (corazul(3) > 53 e corazul(3) < 55)) e
          ((corvermelha(4) > 44 e corvermelha(4) < 45) e
          (corverde(4) > 47 e corverde(4) < 48) e 
          (corazul(4) > 53 e corazul(4) < 55)))
        )entao{
          tras(500)
          esperar(200)
          rotacionar(1000, 90)
          #enquanto(1==1)farei{
            frente(500)
            esperar(300)
           # se(ultra(1)<30)entao{
          #    interromper()
          #  }
          #}
          interromper()
        }
        se(cor(2)=="VERDE")entao{
          entrarlinhaverm()
        }
      }
    }

    se(ultra(1)<30)entao{#vai para o lado errado quando infinito
      se(nPodeClaudio==2)entao{
        rotacionar(500, 90)
      }senao{
        rotacionar(500, negativo(90))
      }
      CorrigirAngulo90()
    }
  }
}

tarefa atuadorSoltarBola{
  baixar(1000)
  velocidadeatuador(100)
  girarbaixo(100)
  #enquanto(temvitima()==VERDADEIRO)farei{
  #  esperar(1)    
  #}
  esperar(500)
  girarcima(100)
  levantar(1000)
  velocidadeatuador(100)
}

tarefa atuadorPegarBola{
  baixar(1000)
  velocidadeatuador(100)
  abrir(100)
  enquanto(temvitima()==falso)farei{
    frente(500)
  } 
  frente(500)
  fechar(100)
  levantar(1000)
  velocidadeatuador(100)
}

tarefa testesensor{
	se(nPodeClaudio==2)entao{
	  rotacionar(500,90)
	}senao{
	  rotacionar(500,negativo(90))
	}
}


tarefa pegarBola{
  frente(500)
  esperar(105)
  se(usarSensor ==2)entao{
    rotacionar(500, 90)
  }senao{
    rotacionar(500, negativo(90))
  }
  atuadorPegarBola()
  CorrigirAngulo90()
}
tarefa voltarPreto{
  rogerio = direcao()
  enquanto(1==1)farei{
    escrever(3, "variacao rogerio")
    escrever(1, virartexto(variaRogerio))
    tras(500)
    variaRogerio=rogerio-direcao()

    se(variaRogerio<0)entao{
      variaRogerio=variaRogerio*negativo(1)
    }
    escrever(2, virartexto(variaRogerio))

    se(variaRogerio > 8 e variaRogerio < 20)entao{
      se(nPodeClaudio==2)entao{
        enquanto(toque(1)==falso e cor(5)=="BRANCO")farei{
          se(cor(3)=="VERDE" ou 
            (((corvermelha(1) > 44 e corvermelha(1) < 45) e
            (corverde(1) > 47 e corverde(1) < 48) e 
            (corazul(1) > 53 e corazul(1) < 55)) e
            ((corvermelha(2) > 44 e corvermelha(2) < 45) e
            (corverde(2) > 47 e corverde(2) < 48) e 
            (corazul(2) > 53 e corazul(2) < 55))) ou
            (((corvermelha(3) > 44 e corvermelha(3) < 45) e
            (corverde(3) > 47 e corverde(3) < 48) e 
            (corazul(3) > 53 e corazul(3) < 55)) e
            ((corvermelha(4) > 44 e corvermelha(4) < 45) e
            (corverde(4) > 47 e corverde(4) < 48) e 
            (corazul(4) > 53 e corazul(4) < 55)))
          )entao{
            enquanto(1==1)farei{
              enquanto(1==1)farei{
                direita(500)
                se(rogerio-10<0)entao{
                  tempAngulo1 = 0
                }senao{
                  tempAngulo1 = rogerio
                }

                se(rogerio+10>360)entao{
                  tempAngulo2 = 360
                }senao{
                  tempAngulo2 = rogerio
                }
                se(direcao()> tempAngulo1 e direcao() < tempAngulo2)entao{
                  interromper()
                }
              }
            }
            frente(500)
            esperar(100)
            interromper()
          }
          esquerda(500)
        }
      }senao{
        enquanto(toque(1)==falso e cor(5)=="BRANCO")farei{
          se(cor(3)=="VERDE" ou 
            (((corvermelha(1) > 44 e corvermelha(1) < 45) e
            (corverde(1) > 47 e corverde(1) < 48) e 
            (corazul(1) > 53 e corazul(1) < 55)) e
            ((corvermelha(2) > 44 e corvermelha(2) < 45) e
            (corverde(2) > 47 e corverde(2) < 48) e 
            (corazul(2) > 53 e corazul(2) < 55))) ou
            (((corvermelha(3) > 44 e corvermelha(3) < 45) e
            (corverde(3) > 47 e corverde(3) < 48) e 
            (corazul(3) > 53 e corazul(3) < 55)) e
            ((corvermelha(4) > 44 e corvermelha(4) < 45) e
            (corverde(4) > 47 e corverde(4) < 48) e 
            (corazul(4) > 53 e corazul(4) < 55)))
          )entao{
            enquanto(1==1)farei{
              esquerda(500)
              se(rogerio-10<0)entao{
                tempAngulo1 = 0
              }senao{
                tempAngulo1 = rogerio
              }

              se(rogerio+10>360)entao{
                tempAngulo2 = 360
              }senao{
                tempAngulo2 = rogerio
              }
              se(direcao()> tempAngulo1 e direcao() < tempAngulo2)entao{
                interromper()
              }
            }
            frente(500)
            esperar(100)
            interromper()
          }
          direita(500)
        }
      }
      CorrigirAngulo90()
    }
    se(toque(1)==VERDADEIRO ou cor(5)=="PRETO" ou cor(3)=="VERDE" ou
      (((corvermelha(1) > 44 e corvermelha(1) < 45) e
      (corverde(1) > 47 e corverde(1) < 48) e 
      (corazul(1) > 53 e corazul(1) < 55)) e
      ((corvermelha(2) > 44 e corvermelha(2) < 45) e
      (corverde(2) > 47 e corverde(2) < 48) e 
      (corazul(2) > 53 e corazul(2) < 55))) ou
      (((corvermelha(3) > 44 e corvermelha(3) < 45) e
      (corverde(3) > 47 e corverde(3) < 48) e 
      (corazul(3) > 53 e corazul(3) < 55)) e
      ((corvermelha(4) > 44 e corvermelha(4) < 45) e
      (corverde(4) > 47 e corverde(4) < 48) e 
      (corazul(4) > 53 e corazul(4) < 55)))
    )entao{
      interromper()
    }
  }
  se(cor(5)!="PRETO")entao{
    se(usarSensor == 2)entao{
      rotacionar(500, 90)
    }senao{
      rotacionar(500, negativo(90))
    }
  }
  CorrigirAngulo90()
  enquanto(1==1)farei{
    frente(500)
    procurarPerdidaVolta()
    se(cor(5)=="PRETO")entao{
      interromper()
    }
  }
}

tarefa procurarBolinha{
  escrever(1, "procurar bolinhas")
  se(ultra(2)>ultra(3))entao{
    usarSensor = 2
  }senao{
    usarSensor = 3
  }
  enquanto(1==1) farei{
    se(cor(5)=="PRETO")entao{
      terminarSemUmaBola = 1
      interromper()
    }
    frente(500)
    procurarPerdidaIda()
    se(b<50)entao{
      escrever(1, virartexto(b))
      b = b + 1
      se(ultra(usarSensor)>9000)entao{
        ul=280
      }senao{
        ul=ultra(usarSensor)
      }
      media=media+ul
    }senao{
      escrever(2, "libhja 2")
      se(pegarAnterior==0)entao{
        mediaAnterior = 260
      }
      mediaNova = media/b

      se(pegarAnterior > 10)entao{
        variacao = mediaNova - mediaAnterior
        se(variacao<0)entao{
          variacao=variacao*negativo(1)
        }
        pegarAnterior = 0
      }
      escrever(1,virartexto(media))
      escrever(2,virartexto(variacao))
      se(variacao>100)entao{
        interromper()
      }
      b=0
      media=0
      pegarAnterior = pegarAnterior + 1
    }  
  }
  #o primeiro valor lido pelo sensor será sempre o valor da parede, 
  #q será uma cosntante, já q o robô está paralelo com a parede
  #então para achar a bolinha eu pensei em fazer assim:
    #-pega o valor do ultrassom q representa a distância até a parede
    #-vai andando até o valor do ultrassom mudar relativamente (ctz q é bolinha)
}

tarefa centralizarPreto{
  se(ultra(1)<90)entao{
    enquanto(1==1)farei{
      tras(500)
      se(ultra(1)>90 e ultra(1)<100)entao{
        interromper()
      }
    }
  }senao se(ultra(1)>100)entao{
    enquanto(1==1)farei{
      frente(500)
      se(ultra(1)>90 e ultra(1)<100)entao{
        interromper()
      }
    }
  }
  se(ultra(2)<ultra(3))entao{
	  rotacionar(500, 90)
  }senao{
	  rotacionar(500,negativo(90))
  }
  corrigir45()
  se(numeroAnguloPreto > 340)entao{
    numeroAnguloPreto = 360
  }
  escrever(1, virartexto(numeroAnguloPreto))
  frente(500)
  esperar(100)
  atuadorSoltarBola()
  enquanto(temvitima()==VERDADEIRO)farei{
    atuadorSoltarBola()
  }

  se(nPodeClaudio==2)entao{
	  rotacionar(500, negativo(90))
  }senao{
    rotacionar(500, 90)
  }
  enquanto(1==1)farei{
    frente(500)
    se(ultra(1)<30)entao{
      interromper()
    }
  }
  se(nPodeClaudio==2)entao{
	  rotacionar(500, negativo(45))
  }senao{
    rotacionar(500, 45)
  }
  CorrigirAngulo()
}

tarefa pretoNoFimFrenteFIM{
  escrever(3,"PRETO NO FIM/FRENTE FIM")
  numeroAnguloPreto = direcao()
  tras(500)
  esperar(200)
  se(ultra(2)>ultra(3))entao{
    nPodeClaudio = 2
  }senao{
    nPodeClaudio = 3
  }
  se(nPodeClaudio==2)entao{
	  rotacionar(500, 45)
  }senao{
    rotacionar(500, negativo(45))
  }
  corrigir45()
  

  se(ultra(1)<90)entao{
    enquanto(1==1)farei{
      tras(500)
      se(ultra(1)>90 e ultra(1)<100)entao{
        interromper()
      }
    }
  }senao se(ultra(1)>100)entao{
    enquanto(1==1)farei{
      frente(500)
      se(ultra(1)>90 e ultra(1)<100)entao{
        interromper()
      }
    }
  }
  se(ultra(2)<ultra(3))entao{
	  rotacionar(500, 90)
  }senao{
	  rotacionar(500,negativo(90))
  }
  corrigir45()
  frente(500)
  esperar(100)
  atuadorSoltarBola()
  enquanto(temvitima()==VERDADEIRO)farei{
    atuadorSoltarBola()
  }

  se(nPodeClaudio==2)entao{
	  rotacionar(500, 90)
  }senao{
    rotacionar(500, negativo(90))
  }
  corrigir45()

  enquanto(ultra(1)>10)farei{
    frente(500)
    se(ultra(1)<30)entao{
      interromper()
    }
  }

  se(nPodeClaudio==2)entao{
	  rotacionar(500, 45)
  }senao{
    rotacionar(500, negativo(45))
  }
  CorrigirAngulo90()
  
}

tarefa pretoNoFimFrente{
  escrever(3,"PRETO NO FIM/FRENTE")
  numeroAnguloPreto = direcao()
  tras(500)
  esperar(200)
  se(ultra(2)>ultra(3))entao{
    nPodeClaudio = 2
  }senao{
    nPodeClaudio = 3
  }
  se(nPodeClaudio==2)entao{
	  rotacionar(500, 45)
  }senao{
    rotacionar(500, negativo(45))
  }
  corrigir45()
  centralizarPreto()
  zerarvariaveis()
  procurarBolinha()
  se(terminarSemUmaBola == 1)entao{
    enquanto(1==1)farei{
      frente(500)
      procurarPerdidaVolta()
      se(cor(5)=="PRETO")entao{
        interromper()
      }
    }
  }senao{
    pegarBola()
    voltarPreto()
  }
}

tarefa pretoNoInicioLado{
  escrever(3,"PRETO NO INICIO/LADO")
  testesensor()
  CorrigirAngulo()
  numeroAnguloPreto = direcao()

  enquanto(1==1)farei{
    frente(300)
    se(cor(5)=="PRETO")entao{
      interromper()
    }
  }
  tras(500)
  esperar(200)
  se(ultra(2)>ultra(3))entao{
    nPodeClaudio = 2
  }senao{
    nPodeClaudio = 3
  }
  se(nPodeClaudio==2)entao{
	  rotacionar(500, 45)
  }senao{
    rotacionar(500, negativo(45))
  }
  corrigir45()
  centralizarPreto()
  zerarvariaveis()
  procurarBolinha()
  pegarBola()
  voltarPreto()
}

tarefa pretoNoFimLado{
  escrever(3,"PRETO NO FIM/LADO")
  testesensor()
  CorrigirAngulo()
  numeroAnguloPreto = direcao()

  enquanto(1==1)farei{
    frente(300)
    se(cor(5)=="PRETO")entao{
      interromper()
    }
  }
  tras(500)
  esperar(200)
  se(ultra(2)>ultra(3))entao{
    nPodeClaudio = 2
  }senao{
    nPodeClaudio = 3
  }
  se(nPodeClaudio==2)entao{
	  rotacionar(500, 45)
  }senao{
    rotacionar(500, negativo(45))
  }
  corrigir45()
  centralizarPreto()
  zerarvariaveis()
  procurarBolinha()
  pegarBola()
  voltarPreto()
}





inicio

se(ultra(1)>9000)entao{
  buraco = 1
}
atuadorSoltarBola()
timerController = 0
anguloInicial = direcao()
enquanto(1==1)farei{
  frente(300)
  se(b<50)entao{
    se(nPodeClaudio == 0)entao{
      se(ultra(3)<60)entao{
        nPodeClaudio=2
      }senao{
        nPodeClaudio=3
      }
    }
    se(nPodeClaudio==2)entao{
      ul=ultra(2)
    }senao{
      ul=ultra(3)
    }
    media=media+ul
    b=b+1
  }senao{
    se(pegarAnterior==0)entao{
      mediaAnterior = media/b
    }
    mediaNova = media/b

    se(pegarAnterior > 10)entao{
      variacao = mediaNova - mediaAnterior
      pegarAnterior = 0
      contVariacao = contVariacao + 1
      esperar(1)
    }

    se(contVariacao==5)entao{
      variacaoBase = variacao
      contVariacao = contVariacao + 1
    }
    b=0
    media=0
    pegarAnterior = pegarAnterior + 1
  }
  se(timerController == 0)entao{
    timerController = 1
    zerartemporizador()
  }
  se(temporizador()>100)entao{
    #######################1ºCASO: PRETO NO INICIO/LADO#######################
    se(variacao - variacaoBase > 10 e temporizador()<300)entao{
      pretoNoInicioLado()
      contar=contar+1
      escrever(1,virartexto(contar))
      pretoNoFimFrente()#PEGAR SEGUNDA BOLINHA
      pretoNoFimFrente()#PEGAR TERCEIRA BOLINHA
      pretoNoFimFrenteFIM()#ARRUMAR POSIÇÃO
      sairVerde()
    }
    #######################3ºCASO: PRETO NO FIM/FRENTE#######################
    senao se(cor(5)=="PRETO")entao{
      repetirPegarBolinha = 1
      pretoNoFimFrente()
      pretoNoFimFrente()#PEGAR SEGUNDA BOLINHA
      pretoNoFimFrente()#PEGAR TERCEIRA BOLINHA
      pretoNoFimFrenteFIM()#ARRUMAR POSIÇÃO
      sairVerde()
    }
  #######################2ºCASO: PRETO NO FIM/LADO#######################
    senao se(ultra(1)<15 ou cor(1)=="VERDE")entao{
      pretoNoFimLado()
      pretoNoFimFrente()#PEGAR SEGUNDA BOLINHA
      pretoNoFimFrente()#PEGAR TERCEIRA BOLINHA
      pretoNoFimFrenteFIM()#ARRUMAR POSIÇÃO
      sairVerde()
    }
  }
}
fim