# 👾 Alien Invasion

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![OpenGL](https://img.shields.io/badge/OpenGL-5586A4?style=for-the-badge&logo=opengl&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![Status](https://img.shields.io/badge/Status-Em%20Desenvolvimento-yellow?style=for-the-badge)

> *"Vok'Thar ak Morn" — Vitória ou Morte*

---

## 📖 Descrição

**Alien Invasion** é um jogo de nave espacial do tipo Shot'Em Up, desenvolvido em **C++** com **OpenGL** e **FreeGLUT**. Inspirado no clássico Space Invaders mas com mecânicas mais modernas e liberdade total de movimento.

O jogador assume o papel do **Major Kane**, o último piloto militar humano sobrevivente, numa missão suicida pelo espaço profundo para eliminar o líder alien **Xar'Veth** e salvar a Terra de uma invasão alienígena devastadora.

---

## 📜 História

O ano é **2157**. Sem qualquer aviso, uma enorme frota alienígena emerge do lado escuro de Saturno e inicia uma marcha implacável em direção à Terra. A humanidade é apanhada completamente de surpresa.

A Força Espacial Terrestre envia os seus melhores esquadrões — todos são destruídos. De toda a frota humana, apenas um piloto sobrevive: o **Major Kane**.

Ferido mas determinado, Kane recebe a sua última missão:

> *"Major Kane, és o nosso último recurso. Infiltra-te na frota inimiga, elimina o líder alien e salva a humanidade. Boa sorte."*

Sozinho, numa nave danificada, o Major Kane parte numa missão suicida. A humanidade tem apenas um herói. **E esse herói és tu.**

---

## 🎮 Gameplay

### Mecânicas Principais
- Nave com **movimento livre** em todas as direções
- **Rotação de 90 graus** para enfrentar inimigos de qualquer direção
- **Sistema de recursos** — recolhidos destruindo inimigos e asteroides
- **Upgrades progressivos** — nave evolui ao longo dos níveis
- **Sistema de vidas** — 3 vidas, pode ganhar mais com recursos
- **Escudo temporário** — conseguido através de recursos

### Sistema de Armas
| Arma | Munição | Recarga | Desbloqueio |
|------|---------|---------|-------------|
| 🔫 Tiro Simples | 100 tiros | 0.5 seg | Início |
| 🔫 Tiro Duplo | 75 tiros | 0.8 seg | Nível 2 |
| 🚀 Míssil Teleguiado | 30 mísseis | 2 seg | Nível 3 |
| 🔫 Tiro Triplo | 60 tiros | 1 seg | Nível 4 |
| ⚡ Laser | 20 disparos | 3 seg | Nível 5 |

### Com Recursos Podes
- ❤️ Ganhar vida extra
- 🛡️ Ativar escudo temporário
- 🔫 Reabastecer munição
- ⚡ Desbloquear upgrades da nave

---

## 🌌 Níveis

| Nível | Local | Novidade |
|-------|-------|----------|
| 1 | Cintura de Asteroides | Introdução ao jogo |
| 2 | Órbita de Marte | Inimigos disparam mais |
| 3 | Órbita de Júpiter | Kamikazes aparecem |
| 4 | Órbita da Lua | Naves escudo aparecem |
| 5 | Órbita da Terra | Boss Final — Xar'Veth |

---

## 👽 Inimigos

### Capitães de Frota
| Nível | Capitão | Título |
|-------|---------|--------|
| 1 | **Grax** | Explorador/Caçador |
| 2 | **Vokarn** | Guerreiro Sombrio |
| 3 | **Zephon** | Destruidor |
| 4 | **Malakor** | Conquistador |
| 5 | **Xar'Veth** | O Eterno — Líder Supremo |

### Unidades Especiais
- 👻 **Vex'Ari — Os Sem Lei** — Mercenários imprevisíveis. Podem ser aliados ou inimigos!
- 🌟 **Zyx'Nara — A Errante** — Nave misteriosa. Dourada = aliada, Vermelha = inimiga!

---

## 🎯 Sistema de Pontuação

| Ação | Pontos |
|------|--------|
| Destruir nave fraca | 100 pts |
| Destruir nave de guerra | 250 pts |
| Destruir capitão | 1000 pts |
| Destruir Zyx'Nara inimiga | 500 pts |
| Destruir asteroide grande | 50 pts |
| Completar nível rapidamente | Bónus de tempo |

---

## 🎮 Controlos

| Tecla | Ação |
|-------|------|
| `W` / `↑` | Mover para cima |
| `S` / `↓` | Mover para baixo |
| `A` / `←` | Mover para a esquerda |
| `D` / `→` | Mover para a direita |
| `Espaço` | Disparar |
| `Q` | Trocar arma |
| `P` | Pausa |
| `H` | Ajuda |
| `Esc` | Sair |

---

## 🛠️ Tecnologias

- **C++** — linguagem de programação
- **OpenGL** — biblioteca gráfica
- **FreeGLUT** — gestão de janelas e eventos
- **irrKlang** — som *(futuro)*
- **SOIL** — texturas *(futuro)*

---

## ⚙️ Como Compilar e Executar

### Requisitos

```bash
sudo apt-get install freeglut3-dev
```

### Compilar

```bash
cd src/AlienInvasion
g++ main.cpp Nave.cpp -o alieninvasion -lGL -lGLU -lglut
```

### Executar

```bash
./alieninvasion
```

---

## 📁 Estrutura do Projeto

alien-invasion/
│
├── src/
│   └── AlienInvasion/    ← código fonte do jogo
├── include/              ← headers
├── assets/
│   ├── textures/         ← texturas
│   └── sounds/           ← sons
├── docs/                 ← GDD e relatórios
│   └── GDD_AlienInvasion.pdf
└── README.md

---

## 📋 Game Design Document

O GDD completo do jogo está disponível em [`docs/GDD_AlienInvasion.pdf`](docs/GDD_AlienInvasion.pdf).

---

## 👤 Autor

**Cesaltino Rodrigues Lopes**
- GitHub: [@CLopes86](https://github.com/CLopes86)
- Licenciatura em Informática e Multimédia — IPCB
- Disciplina: Computação Gráfica 2025/2026

---

## 📄 Licença

Este projeto está licenciado sob a licença MIT — ver ficheiro [LICENSE](LICENSE) para detalhes.

---

<div align="center">
  <i>"Vok'Thar ak Morn" — Vitória ou Morte</i>
  <br><br>
  Desenvolvido com ❤️ por Cesaltino Rodrigues Lopes
</div>