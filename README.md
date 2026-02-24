# Desenvolvimento GameServer Season 3 Ep1

### CUSTOMIZAÇÕES
- Custom Rank (Patentes com icones em cima do nome do player)
- Custom TOP 10 Ranking (Tecla F5)
### FIXES

### DESEMPENHO
 - Melhora no consumo de memória (Redução de leitura de Monstros, itens, Check-in de usuarios).
  - Melhora no consumo de CPU (Redução de leitura de Monstros consultando 10000 monstros).

### UPDATES

    ATUALIZAÇÃO 94 (2.5.2)
    * Nova mensagem no arquivo "Data\Message.txt" [ALL VERSIONS] (740~744) [ALL VERSIONS]
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Character.dat". [TODAS AS VERSÕES] (CalcLuaScriptSwitch)
    * Nova opção agregada em "GameServerArca\DATA\GameServerInfo - Character.dat". [S8] (CalcLuaScriptSwitch)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Character.dat". [TODAS AS VERSÕES] (CalcLuaScriptSwitch)
    
    * Novo arquivo "Data\Script\Character\CalcCharacter.lua" para modificar os saldos em LUA. [TODAS AS VERSÕES]
    
    * Repare o suporte do buff no OfflineHelper. [T6][T8]
    * Se reparar o erro que o buff invisível não borrara ao atacar. [TODAS AS VERSÕES]
    
    * Melhore o sistema ASync de LUA. [TODAS AS VERSÕES]
    * Melhorias de segurança em alguns arquivos relacionados ao Sockets. [TODAS AS VERSÕES]
    
    * Você realizou melhorias no sistema QuestWorld. [T6][T8]
    
    ATUALIZAÇÃO 93 (2.5.1)
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomEventDropSwitch, CustomGiftSwitch, CustomLukeHelperSwitch, CustomPickMoneyPick, CustomPickJewelPick, CustomPickExcellentPick, CustomPickAncientPick)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomEventDropSwitch, CustomGiftSwitch, CustomLukeHelperSwitch, CustomPickMoneyPick, CustomPickJewelPick, CustomPickExcellentPick, CustomPickAncientPick)
    
    * Novo arquivo adicionado em "Data\Character\DefaultClassInfo.txt" para dar presentes aos novos. [97][99]
    * Novo arquivo agregado em "Data\Custom\CustomBuyVip.txt" [97][99]
    * Novo arquivo agregado em "Data\Custom\CustomEventDrop.txt" [97][99]
    * Novo arquivo agregado em "Data\Custom\CustomGift.txt" [97][99]
    * Novo arquivo agregado em "Data\Custom\CustomHealthBar.txt" [97][99]
    * Novo arquivo agregado em "Data\Custom\CustomLukeHelper.txt" [97][99]
    * Novo arquivo agregado em "Data\Custom\CustomMonsterKillCount.txt" [97][99]
    
    * Foi adicionado o saco Special "EventItemBag\Special\Custom Arena.txt" [97][99]
    * Agregou a bolsa Special "EventItemBag\Special\Luke Ajudante.txt" [97][99]
    
    * Modificado o arquivo "Data\Custom\CustomPick.txt" agregando o AccountLevel dos itens negados. [TODAS AS VERSÕES]
    * O arquivo "Data\Event\BonusManager.dat" foi modificado para modificar o BonusIndex. [TODAS AS VERSÕES]
    * Modificado o arquivo "Data\EventItemBagManager.txt", agregando os pacotes de CustomArena e LukeHelper. [97][99]
    
    * Novos comandos agregados em "Data\CommandManager.txt" (54)(Gift) [97][99]
    * Novos comandos agregados em "Data\CommandManager.txt" (60)(CustomBuyVip) [97][99]
    
    * Melhore as instâncias dos aplicativos etapa 3 de 3. [TODAS AS VERSÕES]
    
    * O erro foi reparado quando a reconexão off-line interrompeu a conexão. [TODAS AS VERSÕES]
    * Foi reparado o erro que ao voltar a reconectar offline e online bugou o helper. [T6][T8]
    * Foi reparado o erro do Skill Fire Slash que não foi pega nos jogadores alvo. [TODAS AS VERSÕES]
    
    * ¡ATENÇÃO! Você precisa executar o script SQL "UPDATE 2.5.1.sql" incluído no banco de dados. [97][99] (Não se exige para servidores novos)
    
    ATUALIZAÇÃO 92 (2.5.0)
    * Foi adicionada uma nova opção em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (ReconnectOfflineSwitch)
    * Foi adicionada uma nova opção em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (ReconnectOfflineSwitch)
    
    * Faça alterações no sistema de ItemBag Old e melhore o sistema de drop. [TODAS AS VERSÕES]
    
    * Melhore as instâncias dos aplicativos etapa 2 de 3. [TODAS AS VERSÕES]
    
    * Se reparar o buff de elfos no AutoAttack. [TODAS AS VERSÕES]
    * Repare o buff de elfos no OfflineAttack. [T6][T8]
    * Repare o FireSlash no Helper que o deixou de atacar nos mapas do Siege. [T6][T8]
    
    * Melhore o menu de invasões, bônus e demas. [TODAS AS VERSÕES]
    * Melhore o sistema de pacotes para controlar os desbordes. [TODAS AS VERSÕES]
    * Adicione um novo menu para controlar o EventDrop. [TODAS AS VERSÕES]
    * Se agregar o sistema de reconexão de contas offline. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 91 (2.4.9)
    * Realize melhorias nos sistemas de segurança. [TODAS AS VERSÕES]
    * Melhore o sistema de registros de hacks. [TODAS AS VERSÕES]
    * Melhore os sistemas de detecção de hacks. [TODAS AS VERSÕES]
    * Melhore a estabilidade dos executáveis. [TODAS AS VERSÕES]
    * Melhore e otimize o consumo e o gerenciamento de recursos dos executáveis. [TODAS AS VERSÕES]
    * Melhore as instâncias dos aplicativos. [TODAS AS VERSÕES]
    
    * Se você resolver um problema que congelou o servidor de jogo executável várias vezes. [TODAS AS VERSÕES]
    * Se reparar um erro que fez com que os monstruosos não fossem eliminados. [TODAS AS VERSÕES]
    * Se reparar um erro relacionado à terceira missão. [TODAS AS VERSÕES]
    * Foi corrigido um erro que não deixou de adicionar mobs a mapas específicos. [TODAS AS VERSÕES]
    * Um erro que congelou o servidor foi corrigido quando o evento Kanturu foi iniciado. [TODAS AS VERSÕES]
    * Se reparar um erro de itemmove com o clique direito. [S6]
    
    * Melhorias no main.dll relacionadas ao downgrade. [T4][T6]
    * Inclui downgrade de selectserver e selectchar. [T4][T6]
    * Melhore o sistema de detecção de hacks do SShield. [MHP]
    
    ATUALIZAÇÃO 90 (2.4.8)
    * Adicione DLL anti-injeção em MHPClient.dll [TODAS AS VERSÕES]
    * Adicione a opção de eliminação de itens duplicados à ferramenta "ItemDupeTool".
    * Você recontrui o sistema de busca de itens duplicados e busca de itens específicos em "ItemDupeTool".
    
    * Repara erros de segurança importantes que geraram travamentos no servidor de jogos. [TODAS AS VERSÕES]
    * Corrija um erro de segurança no SShield. [TODAS AS VERSÕES]
    * Se reparou o comando que não funcionava. [T8]
    * Se corrigir um erro na função Friends. [99]
    * Se reparar um erro de viewport correspondente a Alianças e Hostilidades. [S1][S2][S3][S4][S6][S8]
    * Se reparar um erro no evento Acheron Guardian que não respawneaban monstruos. [T8]
    
    * Melhore os arquivos MuOnline.bak agregando e melhorando as funções existentes. [TODAS AS VERSÕES]
    * Melhore as opções de segurança em MHPClient.dll [TODAS AS VERSÕES]
    * Se melhorou o sistema de Reconnect que não guardava todos os dados. [TODAS AS VERSÕES]
    * Melhore o sistema de CRC de Main.dll [TODAS AS VERSÕES]
    
    * Foi corrigido um erro no DataServer que não criava seriais em servidores novos. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 89 (2.4.7-1)
    * Foi adicionada uma nova opção em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (ReconnectTime)
    * Foi adicionada uma nova opção em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (ReconnectTime)
    
    * Elimine a opção [PartyReconnectTime] em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES]
    * Elimine a opção [PartyReconnectTime] em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES]
    
    * Adicione o ReconnectData salvo à base de dados. [TODAS AS VERSÕES]
    
    * Se reparar um erro de envio de dados para o principal do GameServer. [TODAS AS VERSÕES]
    * Melhore o sistema de recompensa diária. [TODAS AS VERSÕES]
    
    CLIENTE:
    * Agregado o menu de opções avançadas. [97]
    * Se reparar um bug visual do Shield na rede elétrica. [S2][S3][S4][S6][S8]
    
    *ATENÇÃO! Você precisa executar o script SQL "UPDATE 2.4.7-1 - ReconnectData.sql" incluído no banco de dados. [TODAS AS VERSÕES] (Não é necessário para servidores novos)
    
    ATUALIZAÇÃO 89 (2.4.7)
    * Foi adicionada uma nova opção em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (GuildWarSwitch, GuildWarAttackEnable, GuildWarScoreMax1, GuildWarScoreMax2, GuildWarKillScore1, GuildWarKillScore2, GuildWarKillScore3, GuildWarWinnerScore1, GuildWarWinnerScore2, GuildWarWinnerScore3)
    * Uma nova opção foi adicionada em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (GuildWarSwitch, GuildWarAttackEnable, GuildWarScoreMax1, GuildWarScoreMax2, GuildWarKillScore1, GuildWarKillScore2, GuildWarKillScore3, GuildWarWinnerScore1, GuildWarWinnerScore2, GuildWarWinnerScore3)
    
    * Foi adicionada uma nova opção em "GameServer\DATA\GameServerInfo - Command.dat". [TODAS AS VERSÕES] (CommandPostMessage)
    * Foi adicionada uma nova opção em "GameServerCS\DATA\GameServerInfo - Command.dat". [TODAS AS VERSÕES] (CommandPostMessage)
    
    * O arquivo "Data\Util\Filter.txt" foi modificado para o sistema melhorado anteriormente. [TODAS AS VERSÕES]
    * O arquivo "Data\Message.txt" (323) foi modificado, alterando a mensagem. [TODAS AS VERSÕES]
    
    * Foi reconstruído o sistema de filtragem de nomes de clãs e personagens. [TODAS AS VERSÕES]
    
    * Se você adicionar opções para estabelecer quantos pontos serão dados para fazer guerra ou futebol de batalha. [TODAS AS VERSÕES]
    
    * Foi corrigido o sistema que não otorgava os pontos para ganhar uma guerra ou batalha de futebol. [TODAS AS VERSÕES]
    * Foi corrigido o sistema de restauração de redefinições em master reset. [TODAS AS VERSÕES]
    * Foi corrigido o sistema de restauração de níveis em reset e master reset. [TODAS AS VERSÕES]
    * Foi corrigido o problema de habilidades ao fazer reset ou master reset que borraba os predeterminados. [TODAS AS VERSÕES]
    * Foi corrigido o problema de habilidades de armas equipadas ao fazer reset ou master reset. [TODAS AS VERSÕES]
    * Uma falha gerada pelo sistema anterior de Filter.txt foi corrigida [TODAS AS VERSÕES]
    * Realize melhorias no sistema de pisos do evento Arka War. [T8]
    * Um erro foi corrigido em relação a um pentagrama que foi entregue com mais atributos que ele devia. [T8]
    
    Cliente:
    * Melhorou a renderização dos downgrades. [T4][T6]
    * O sistema do pequeno mapa terminou. [S6]
    * Houve melhorias no downgrade do sistema. [T4][T6]
    
    ATUALIZAÇÃO 88 (2.4.6)
    * Novo arquivo agregado em "Data\Custom\CustomDailyReward.txt" para configurações de recompensas diárias. [TODAS AS VERSÕES]
    
    * O arquivo "Data\Custom\CustomMonster.txt" foi modificado para adicionar SpecialBag para obter drops personalizados em mapas ou monstros modificados. [TODAS AS VERSÕES]
    
    * Repare um problema com ItemGive em LUA. [TODAS AS VERSÕES]
    * Foi reparado um erro que não foi mostrado no NPC 255. [97]
    * Se reparar em 2 novas formas de duplicar. [TODAS AS VERSÕES]
    * Repare o sistema de incremento de vida, defesa, danos e ataques em MonsterList.txt. [TODAS AS VERSÕES]
    
    * Você adiciona logs de vários controles no console (Itens carregados, Erros, Hacks e Itens Inválidos em Bolsas). [TODAS AS VERSÕES]
    
    * Reestruturado o sistema interno de janelas para evitar métodos de duplicação. [TODAS AS VERSÕES]
    * Melhorado mais o sistema de DataServer para torná-lo mais eficiente. [TODAS AS VERSÕES]
    * Sistema agregado de recompensas diárias. [TODAS AS VERSÕES]
    
    * Sistemas agregados de melhor FPS, memória RAM e uso de CPU. [97][99][S1][S2][S3][S4][S6]
    * Downgrade do sistema agregado da barra principal. [T4][T6]
    
    *ATENÇÃO! Você precisa executar o Script SQL "UPDATE 2.4.6 - Daily Reward.sql" incluído no banco de dados. [TODAS AS VERSÕES] (Não é necessário para servidores novos)
    
    ATUALIZAÇÃO 87 (2.4.5)
    * Se reparar um erro que fez com que o zen fosse 0 com penalidade. [TODAS AS VERSÕES]
    * Se reparar o texto de Elpis que estava em coreano. [S2KOR]
    * Repare um método de duplicação com a máquina do caos. [TODAS AS VERSÕES]
    * Repare um método que permita editar a personagem. [TODAS AS VERSÕES]
    * Se reparar um erro que ocorre em servidores grandes nomes de guildas intercambiáveis. [99]
    * Se o comando rename foi reparado, ele não funcionou. [TODAS AS VERSÕES]
    * Se agregar suporte para arquivos UTF-8 BOM. [TODAS AS VERSÕES]
    
    * Melhore o sistema do QueryManager para aulas mais eficientes. [TODAS AS VERSÕES]
    * Otimize o uso de recursos no DataServer para criar novos itens. [TODAS AS VERSÕES]
    * Implemente um novo sistema para serializar os itens somente quando eles forem reconhecidos. [TODAS AS VERSÕES]
    * É reescrito o sistema de serialização com base em dados e gerenciamento. [TODAS AS VERSÕES]
    
    * Modifique o arquivo "Data\Util\Filter.txt" adicionando novas opções. [TODAS AS VERSÕES]
    
    * Eliminado o arquivo "BadSyntax.txt" no DataServer. [TODAS AS VERSÕES]
    
    * Alguns textos de Kanturu foram corrigidos. [S2]
    * Foi corrigido o Dinorant em ícaro. [97]
    
    * Você inclui a ferramenta Item Dupe Tool na pasta Tools. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 86 (2.4.4)
    * Se reparar o sistema de clique que volvia loco os ataques. [97][99][S1]
    * Se reparar nas opções HaveSerial e HaveOption. [TODAS AS VERSÕES] 
    - HaveSerial: 0 Elimina o item sem gerar uma serial, 1: é processado pelo servidor de dados. 
    - HaveOption: 0 Não posee ni puede ter opções excelentes.
    * Se reparar um erro que não permitia vender itens por zen na Loja Pessoal. [S1][S2][S3][S4][S6][S8]
    * Veja melhor a palestra do MemScript para ler arquivos .TXT [TODAS AS VERSÕES]
    * Se reparar um erro de Guild que mostrava as guildas no servidor -1. [97][99]
    * Se reparar um erro que move guildas de posição. [99]
    * Faça uma palestra para obter informações sobre um item da LUA. [TODAS AS VERSÕES]
    * Melhore sistemas internos de main.dll [TODAS AS VERSÕES]
    * É melhor o sistema de ItemDrop.txt e Item.txt tanto de zen como Items. [TODAS AS VERSÕES]
    (2.4.4-1)
    * Se consertar um erro com o dinossauro em Ícaro. [97]
    * Se reparar um erro que trocou guildas ao mudar de conta. [99]
    * Se reparar uma ponte de lua que gerava caidas ou congelamentos de ejecutável. [TODAS AS VERSÕES]
    * Se corrigir um erro grave de segurança que permite executar scripts por meio de um comando de função específico. [TODAS AS VERSÕES]
    * Serão reparados erros de segurança que poderiam ser removidos do servidor. [TODAS AS VERSÕES]
    * Se reparar um erro que não tenha deixado números flutuantes com o novo sistema de leitura. [TODAS AS VERSÕES]
    * Melhore os sistemas internos do SShield (MHPServer). [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 85 (2.4.3)
    * Se reparar erros de CustomAttack relacionados a buffs ou usar habilidades sem armas tecla F8. [TODAS AS VERSÕES]
    * Se reparar erros de ItemDrop e ItemGive em LUA que geraram travamento. [TODAS AS VERSÕES]
    * Se reparar o sistema de frutas que tinha falhas e mensagens erradas. [97KOR][99CHS]
    * Um bug foi corrigido para o gerenciador de consultas dos servidores de dados. [TODAS AS VERSÕES]
    * Repare a mensagem quando não for permitido usar a seleção em determinados mapas. [TODAS AS VERSÕES]
    * Se reparar o erro que permite medir itens em busca na loja pessoal. [TODAS AS VERSÕES]
    * Se corrigir um erro no comando rename que gerou problemas. [TODAS AS VERSÕES]
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [97KOR][99CHS] (GuildInsertMaxUser1)
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [99CHS] (GuildInsertMaxUser2)
    
    CLIENTE:
    * Remova as opções em "Tools\GetMainInfo\MainInfo.ini" (MaxAttackSpeed) [TODAS AS VERSÕES]
    * Adicione um novo arquivo para configurar a velocidade de ataque em "Tools\GetMainInfo\Data\SkillAttackSpeed.txt" [ALL VERSIONS]
    * Se reparar problemas relatados com a janela H de horários. [S4][S6][S8]
    
    ATUALIZAÇÃO 84 (2.4.2)
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (GuildWarAttackEnable)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (GuildWarAttackEnable)
    
    * Se reparar um congelamento aleatório que foi feito por um relógio duplicado. [TODAS AS VERSÕES]
    * Se reparar um erro no Castle Siege que ocasionou que alguns miembros caíssem fora. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    * As habilidades são reparadas agregando o alvo padrão inexistente. [97KOR]
    * Reparar erros de CustomAttack relacionados a buffs ou usar habilidades sem armas. [TODAS AS VERSÕES]
    * Se reparar o buff master no ataque que gera blocos intermináveis. [S4][S6][S8]
    * Repare o buff master em um ajudante offline que gera blocos intermináveis. [S4][S6][S8]
    * Se reparar a desconexão das habilidades mestre de RF, DL e SM em Ataque. [S4][S6][S8]
    * Se reparar um erro que não gerou sementes de algunos. [T4][T6]
    ATUALIZAÇÃO 83 (2.4.1 ~ 2.4.1-1):
    *** ARQUIVOS MODIFICADOS ***
    * O arquivo "Data\EventItemBagManager.txt" foi modificado, agregando as malas do Imperial Guardian. [S6ENG][S8ENG]
    * O arquivo "Data\Script\System\ScriptCore.lua" foi modificado para adicionar o novo método "BridgeFunction_OnSQLAsyncResult" [ALL VERSIONS]
    * Se você agregar os sacos ausentes do evento Imperial Guardian em "Data\EventItemBag\Special\Imperial Guardian Stone Statue 1". [S6ENG][S8ENG]
    * Você pode adicionar os sacos ausentes do evento Imperial Guardian em "Data\EventItemBag\Special\Imperial Guardian Stone Statue 2". [S6ENG][S8ENG]
    * Você pode adicionar os sacos ausentes do evento Imperial Guardian em "Data\EventItemBag\Special\Imperial Guardian Stone Statue 3". [S6ENG][S8ENG]
    * Você pode adicionar os sacos ausentes do evento Imperial Guardian em "Data\EventItemBag\Special\Imperial Guardian Stone Statue 4". [S6ENG][S8ENG]
    * Se você agregar os sacos ausentes do evento Imperial Guardian em "Data\EventItemBag\Special\Imperial Guardian Stone Statue 5". [S6ENG][S8ENG]
    * Você adiciona os sacos ausentes do evento Imperial Guardian em "Data\EventItemBag\Special\Imperial Guardian Stone Statue 6". [S6ENG][S8ENG]
    * Se você agregar mobs ausentes em "Data\Monster\Spawn\069 - Imperial Guardian 1.txt" correspondente ao Imperial Guardian. [S6ENG][S8ENG]
    * Se você adicionar mobs ausentes em "Data\Monster\Spawn\070 - Imperial Guardian 2.txt" correspondente ao Imperial Guardian. [S6ENG][S8ENG]
    * Adicione mobs ausentes em "Data\Monster\Spawn\071 - Imperial Guardian 3.txt" correspondente ao Imperial Guardian. [S6ENG][S8ENG]
    * Se você agregar mobs ausentes em "Data\Monster\Spawn\072 - Imperial Guardian 4.txt" correspondente ao Imperial Guardian. [S6ENG][S8ENG]
    
    *** INFORMAÇÕES GERAIS ***
    * O problema de congelamento foi corrigido pela LUA. [TODAS AS VERSÕES]
    * Foi corrigido o problema de que não se acumulavam os pontos do cerco do castelo. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    * O problema da mensagem 0 foi corrigido nos monstros personalizados. [TODAS AS VERSÕES]
    * Foi corrigido o travamento produzido pelo CustomPick. [TODAS AS VERSÕES]
    * Foi corrigido o crash produzido em comandos com caracteres árabes e/ou chineses. [TODAS AS VERSÕES]
    * Foi corrigido o "OnShutScript" que não realizava a função antes de descarregar. [TODAS AS VERSÕES]
    * Foi corrigido o problema visual dos kundums. [S8ENG]
    * Se modificou o bônus de festa, sendo geral para turmas iguais e especial para turmas diferentes. [TODAS AS VERSÕES]
    * O sistema de detecção de erros produzido pela BOM UTF-8 foi reestabelecido. [TODAS AS VERSÕES]
    * Os métodos SQLASync são agregados para executar sentenças e obter dados de forma assíncrona. [TODAS AS VERSÕES]
    * Se arreglo o bug que não poderia pegar uma pessoa em duelo. [99CHS][S1KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR]
    
    *** INFORMAÇÃO SOBRE LUA ***
    * O modelo foi atualizado com as novas funções Lua em "Data\Script\Script\TemplateScript.lua" [ALL VERSIONS]
    * O GUIA da Lua foi atualizado em "Tools\Guides\Script Lua BridgeFunctions.rtf" [TODAS AS VERSÕES]
    * O GUIA da Lua foi atualizado em "Tools\Guides\Script Lua Interface Functions.rtf" [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 82 (2.4.0):
    * Repare a falha aleatória dos servidores de jogo. [TODAS AS VERSÕES]
    * Melhore toda a segurança do servidor interno Cliente~Servidor [TODAS AS VERSÕES]
    * Se reestruturar as conexões do cliente servidor. [TODAS AS VERSÕES]
    * Se reparar o erro de clãs com mais de 9 letras ganadores do castelo cerco. [TODAS AS VERSÕES]
    * Melhore a segurança da rede elétrica. [TODAS AS VERSÕES]
    * Repare o erro do Attack(F8) e seu atraso correspondente. [TODAS AS VERSÕES]
    * Se reparar um erro no sistema de experiência do Party. [TODAS AS VERSÕES]
    * Repare o editor com as variáveis. "Normal, Chat bloqueado, Invisível, GameMaster e Administrador" 
    - Game Master (Tenha seu globo na cabeça, mas pode ser golpeado e cazado pelos mobs além de poder escrito usando o sinal "!" no global) 
    - Administrador (Tem seu globo na cabeça, é imune a todo tipo de ataque e ademas não é cazado por ningun mob. Também pode usar o signo "!" no global)
    * Serão reparadas funções do administrador e do gamemaster que não funcionam. [TODAS AS VERSÕES]
    * O ConnectServer e/ou GameServer pode ser reparado de uma forma que trave usando uma modificação em um pacote. [TODAS AS VERSÕES]
    * Repare um acidente ao matar com certo buff no Arca Battle. [S8ENG]
    
    * AVISO IMPORTANTE: Você deve atualizar tanto o cliente (Main.dll) quanto o servidor (todos os executáveis) para poder usar esta versão e gerar o arquivo "ServerInfo.sse" usando o novo GetMainInfo.
    ATUALIZAÇÃO 81 (2.3.9):
    * Se reparar erro de travamento em má configuração de Bags. [TODAS AS VERSÕES]
    * Se você consertar o ataque, poderá bugar 2 habilidades por vez. [TODAS AS VERSÕES]
    * Se reparar o Summon de DL que poderia invocar offline. [TODAS AS VERSÕES]
    * Se reparar o erro de clanes que de mas de 7 letras em castle siege. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    
    * Melhore o sistema de gerenciamento de conexões. [TODAS AS VERSÕES]
    * Se reparar um erro relacionado a Luke Helper que fez cair ao mesmo. [TODAS AS VERSÕES]
    
    * Se reorganiza grande parte do código. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 80 (2.3.8):
    * Repare o erro que sabie o nome da conta se você puder desconectar os offline. [TODAS AS VERSÕES]
    * Se você consertar o erro que estava apagando PK e superando o dinheiro máximo, não poderia sacar seu estado PK. [TODAS AS VERSÕES]
    * Corrija o erro da taxa de sucesso nas versões sem SD. [97KOR][99CHS][S0KOR]
    * Se reparar o erro da Miss em PvP. [97KOR][99CHS][S0KOR]
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomAttackPotionRate1,CustomAttackPotionRate2)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomAttackPotionRate1,CustomAttackPotionRate2)
    
    * Você adiciona registros que são exibidos quando você derruba portas ou rompe estátuas no Castle Siege. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    * Se agregar logs que serão exibidos quando a torre do castelo de cerco estiver acessível. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    
    * É reescrito a detecção de velocidade ou HackSpeed ​​nos executáveis, dependendo apenas do servidor. [TODAS AS VERSÕES]
    
    * O arquivo "JoinServer\JoinServer.ini" modificado agrega opções para conexões limitadas por IP ou HardwareId. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 79 (2.3.7):
    * Modificado o mínimo de servidor em tempo real com opções novas e melhores métodos de renderização. [TODAS AS VERSÕES]
    * Reconstruído todo o Castle Siege e melhorado todos os sistemas. [TODAS AS VERSÕES]
    * Agregado o arquivo "Data\Custom\CustomMonster.txt" para configurar parâmetros de mobs. [97KOR][99CHS]
    * Modificado o arquivo "Data\Event\CastleSiege.dat" novos valores de acordo com a versão. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    * Reparado o NPC Castle Guard que os tocabas sem clan se bugueaba. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    * Reparado o NPC Castle Guard que não mostrou todos os clãs que participaram do Castle. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    
    * Ferramentas SSeMU atualizadas para dar suporte a S4KOR e S6ENG.
    
    ATUALIZAÇÃO 78 (2.3.6):
    * Arreglados problemas de reconecta aleatórios. [TODAS AS VERSÕES]
    * Arreglada a taxa de imposto e extração do Sr Master. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    * Arreglada a criação de estátuas no cerco do castelo. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    * Arreglada a reparação de estátuas no cerco do castelo. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    * Desinstale as funções de agregação ou elimine a hostilidade da interface. [S8ENG]
    * Arreglado os problemas que às vezes não se tiram itens de bolsas ou monstros. [TODAS AS VERSÕES]
    * Erros reparados na postagem. [S8ENG]
    * Corrigido o problema das habilidades mestre em OffHelper e OffAttack. [S6ENG][S8ENG]
    * Corrigido o problema dos buffs master em OffHelper e OffAttack. [S6ENG][S8ENG]
    * Corrigido um problema com Arka Battle que foi encerrado várias vezes no evento. [S8ENG]
    
    * Reconstruídas as funções e armazenamento de guildas. [TODAS AS VERSÕES]
    * Reformadas as funções de patrulha dos monstros. [TODAS AS VERSÕES]
    ATUALIZAÇÃO 77 (2.3.5 ~ 2.3.5-2):
    * Nova opção agregada em "DataServer\DataServer.ini" para serialização dos itens (0: Modo Procedimento, 1: Modo Tempo Real). [TODAS AS VERSÕES] (ItemSerialMode)
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Command.dat". [TODAS AS VERSÕES] (CommandPostGlobal)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Command.dat". [TODAS AS VERSÕES] (CommandPostGlobal)
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Event.dat". [S8ENG] (WindowEventSwitch)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Event.dat". [S8ENG] (WindowEventSwitch)
    
    * Substitua o StartUp do xTeam pelo SSeMU oficial disponível na pasta "StartUp\". [TODAS AS VERSÕES]
    
    * O arquivo "Data\Message.txt" (323) foi modificado e agregado %d para visualizar o ServerCode. [TODAS AS VERSÕES]
    * Modificado o arquivo "ConnectServer\ServerList.dat" para adicionar o GameServerArca. [S8ENG]
    * Modificado o arquivo "Data\MapServerInfo.txt" para adicionar o GameServerArca. [S8ENG]
    * Modificado o arquivo "GameServerCS\DATA\GameServerInfo - Event.dat" excluindo os eventos Acheron Guardian, Arca Battle, Illusion Temple Renewal e Chaos Castle Final. [S8ENG]
    
    * Se ocorrer um erro crítico no que diz respeito à segurança que você fez para roubar personagens. [97KOR][99CHS]
    * Adicione um novo GameServer dedicado aos eventos Acheron Guardian, Arca Battle, Illusion Temple Renewal e Chaos Castle Final [S8ENG]
    * Melhore os sistemas de gerenciamento de usuários, conexões e lista negra. [TODAS AS VERSÕES]
    * Será redesenhado o sistema que contém pacotes em cola para evitar incêndios e inundações. [TODAS AS VERSÕES]
    * Se modifique o serializador de itens. [TODAS AS VERSÕES]
    * Você pode consertar o nível Party Gap no Auto Party. [TODAS AS VERSÕES]
    * Corrija um bug visual ao entrar no jogo Acheron Guardian de jogar Arca Battle. [S8ENG]
    * Você pode remover relógios desnecessários de aplicativos que carregam memória. [TODAS AS VERSÕES]
    * Adicione melhorias de segurança ao SShield Protect(MHP). [TODAS AS VERSÕES]
    * Se o bug do comando guild warning for corrigido, ele travará o gameserver. [TODAS AS VERSÕES]
    * Se arreglo o comando que fez travar o gameserver por gmpost. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 76 (2.3.4):
    * Repare o buff automático no CustomAttack. [TODAS AS VERSÕES]
    * Você pode reparar o buff automático e atacá-lo automaticamente no OfflineHelper. [S6E][S8E]
    * Se reparar o sistema de tempo máximo de CustomAttack, CustomPick e OfflineHelper (todas em segundos a partir de agora). [TODAS AS VERSÕES]
    * Se reparar o bug do PersonalShop por moedas que travaram. [S6E][S8E]
    
    * Modificado o sistema de CustomAttack, CustomPick e OfflineHelper para que seja aleatório. [TODAS AS VERSÕES]
    * Agregado recorrido de objetos aleatoriamente. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de itens periódicos. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR]
    * Melhorou o sistema de efeitos em clientes que eles exigem. [97K][99B][S0KOR][S2KOR][S2PHI]
    * Melhores em todos os principais, quando renderizado de opções e desempenho. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 75 (2.3.3 ~ 2.3.3-1):
    * Agregado o evento Arca Battle. [S8ENG]
    
    * O arquivo "Data\Event\ArcaBattle.dat" foi modificado para adicionar opções ao Arca Battle. [S8ENG]
    
    * Nova mensagem no arquivo "Data\Message.txt" [ALL VERSIONS] (731~734) [ALL VERSIONS]
    
    * Desconexões em PvP, GuildWar e Mover de mapa.[97K][99B]
    * Arreglado o cierre do cliente ao passar pelo mapa. [97K][99B]
    * Atualizado o EventEntryLevel de MG. [97K]
    * Arreglado o Viewport para que os níveis de itens não sejam visualizados corretamente.[97K]
    * Arreglado Crash de cliente aleatório por erro de tamanho do pacote.[97K][99B]
    * Arreglado o bug das cores dos danos. [97K]
    * Arreglado o bug de durabilidade nos arcos e balestas. [TODAS AS VERSÕES]
    * Arreglado problema de duplicação no comércio. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    * Registre a palestra de ItemValue em tempo real. [TODAS AS VERSÕES]
    * Ajustado o nível de criação do Magic Gladiator. [97 mil]
    * Arreglado erro de respawn. [97K][99B]
    * Arreglado mover itens para fazer movimentos por chat. [TODAS AS VERSÕES]
    
    * Melhor gerenciamento do SQL Server. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 74 (2.3.2-1):
    * Arreglado as habilidades Twisth Slash, Ragefull Blow, Death Stab e PvP. [97 mil]
    * Corrigir leituras erradas de itens ao fazer recarregar item. [97K][99B]
    * Arreglada a quantidade de itens em quantidades que só serão visualizadas um. [97 mil]
    * Desinstala a desconexão aleatória gerada por um erro de pacote. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    
    * Agregado suporte a SSeMU Tools 1.0.2 para versão 0.97K e relatórios agregados do mesmo. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    
    
    ATUALIZAÇÃO 73 (2.3.2):
    * Novo arquivo agregado em "Data\Event\GoldenArcher.dat" para configurar o Golden Archer NPC. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG]
    * Novo arquivo para configurar mensagens do cliente "Tools\GetMainInfo\Data\CustomMessage.txt" em 3 idiomas. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de Skills de CustomAttack e OfflineHelper para consumir menos memória. [TODAS AS VERSÕES]
    * Melhorado o sistema de dicas de ferramentas, você pode ler todos os itens em todas as interfaces. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR]
    
    * Corrigido o bug visual ao usar as opções de restauração antigas de armas. [S2KOR][S2PHI][S3KOR][S3TAI]
    * Arreglado o Kriss Invisível e comércio com itens antigos. [99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    * Arreglado buffs Master Tree em CustomAttack e OfflineHelper. [S6ENG][S8ENG]
    
    * Reconstruído o NPC Golden Archer que não existia. [S4KOR]
    * Agregado ao cliente novas opções para dar recompensas no NPC Golden Archer. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG]
    
    * Comentários agregados de cada missão. (QuestObjective.txt, QuestReward.txt)[TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 72 (2.3.1):
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Event.dat". [S4KOR][S6ENG] (WindowEventSwitch)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Event.dat". [S4KOR][S6ENG] (WindowEventSwitch)
    
    * Agregado a opção "Duration" em "Data\Character\DefaultClassFreebies.txt" [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    
    * Agregado a opção "Duration" em "Data\Custom\CustomGift.txt" [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    * Agregado a opção "Duration" em "Data\Custom\CustomMarriage.txt" [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    * Agregado a opção "Duration" em "Data\Custom\CustomMonsterKillCount.txt" [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    
    * Agregado la opção "Duration" em "Data\Event\DropEvent.dat" [TODAS AS VERSÕES]
    * Agregado a opção "Duration" em "Data\Item\ItemDrop.txt" [TODAS AS VERSÕES]
    
    * Agregado a opção "Duration" em todos os arquivos de "EventItemBag\*" [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    
    * Opção eliminada "Option5" que não era necessária "Data\MapRateInfo.txt" [97K]
    
    * Adicione requisitos ao uso do Attack ao pressionar F8. [TODAS AS VERSÕES]
    * Resolvido o problema do CustomAttack que poderia ser usado simultaneamente. [TODAS AS VERSÕES]
    * Melhorado o sistema de CustomAttack ao usar clique direito sobre interfaces. [TODAS AS VERSÕES]
    
    * Novo sistema agregado de ToolTip para itens. em "Tools\GetMainInfo\Data\CustomTooltip.txt" [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR]
    
    * Agregado Luke Helper ao evento Window. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    
    * Se agregar janela com horário de eventos tecla H. [S4KOR][S6ENG]
    
    *ATENÇÃO! Você precisa executar o Script SQL "Update 2.3.0 to 2.3.1.sql" incluído no banco de dados. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR] (Não é necessário para servidores novos)
    
    ATUALIZAÇÃO 71 (2.3.0):
    * Há um travamento ao usar uma habilidade. [97 mil]
    * O arquivo "Data\Event\BonusManager.dat" modificado adiciona uma opção para o nome do bônus. [TODAS AS VERSÕES]
    * O arquivo "Data\Event\DropEvent.dat" modificado adiciona uma opção para o nome do evento. [TODAS AS VERSÕES]
    * O arquivo "Data\Event\InvasionManager.dat" modificado adiciona uma opção para o nome da invasão. [TODAS AS VERSÕES]
    
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Event.dat". [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI] (WindowEventSwitch)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Event.dat". [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI] (WindowEventSwitch)
    
    * É modificado com melhorias no suporte de texturas. [97K][99B][S0KOR][S2PHI][S3TAI]
    
    * Se agregar janela com horário de eventos tecla H. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    
    * Modifique o MainInfo.ini para adicionar opções de Switch de alfândega. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 70 (2.2.9 ~ 2.2.9-1):
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (AntiFloodSwitch, AntiFloodBlockTime, AntiFloodMaxCount, AntiFloodMaxTime)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (AntiFloodSwitch, AntiFloodBlockTime, AntiFloodMaxCount, AntiFloodMaxTime)
    
    * Redesenhar o sistema de efeitos Cliente ~ Servidor. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    * Redesenhar o sistema de viewports Cliente ~ Servidor. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    * Redesenhou o sistema de equipar/desequipar. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    
    * Sistemas reparados que relentizam o GameServer. [TODAS AS VERSÕES]
    
    * Reconstruídas funções de segurança do sistema antiflood. [TODAS AS VERSÕES]
    * Reconstruído o sistema RightClic para equipar e desequipar. [97K][99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG]
    
    * Reparado os efeitos dos itens Antigos. [TODAS AS VERSÕES]
    
    
    ATUALIZAÇÃO 68 (2.2.8-1):
    * O arquivo "Data\Skill\SkillDamage.txt" modificado adiciona uma nova seção para controlar os efeitos. [TODAS AS VERSÕES]
    
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Skill.dat". [TODAS AS VERSÕES] (Veneno, Gelo, Decadência, Tempestade de Gelo, Flecha de Gelo, Configurações de Efeito de Flecha Venenosa)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Skill.dat". [TODAS AS VERSÕES] (Veneno, Gelo, Decadência, Tempestade de Gelo, Flecha de Gelo, Configurações de Efeito de Flecha Venenosa)
    
    * Sistema agregado de opções avançadas ao cliente. [S4KOR][S6ENG]
    * Sistema agregado para equipar itens desequipar com o clique direito. [S4KOR][S6ENG]
    
    * Reparada a posição dos botões do tamanho da fonte. [99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    * Reparado o bug de SpawnGate e RespawnGate que não leia o valor 0 no MapManager. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 67 (2.2.8):
    * Atualizado LUA para 5.3, modificados os arquivos padrão, "ScriptMain,ScriptCore". [TODAS AS VERSÕES]
    * Incluido ScriptLua com mensagem de bem-vindo, nível NIP e administrador conectado. [TODAS AS VERSÕES]
    * Atualizadas funções internas dos executáveis ​​para melhorar o gerenciamento de pacotes. [TODAS AS VERSÕES]
    
    * Melhorado o desempenho dos executáveis ​​DataServer e GameServer. [TODAS AS VERSÕES]
    
    * Sistema agregado de opções avançadas ao cliente. [99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    * Sistema agregado para equipar itens desequipar com o clique direito. [99B][S0KOR][S2KOR][S2PHI][S3KOR][S3TAI]
    
    * Arreglado o bug de evolução com MG ou DL e queda com textura caindo. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 66 (2.2.7-1):
    * Novo sistema de ItemValue e ItemStack em tempo real. [TODAS AS VERSÕES]
    * Novo sistema de Attack agregado ao cliente. Ativação pressionando uma tecla. [TODAS AS VERSÕES]
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (WritePenaltyLog)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (WritePenaltyLog)
    
    * Funções aprimoradas do CustomAttack em relação a rangos e ataques. [99B][S0K]
    
    * Arreglada a tomada de poções estando no ajudante offline. [S6ENG][S8ENG]
    * Arreglado o problema dos itens periódicos que não mostram o tempo ao mover os itens. [S4KOR][S6ENG][S8ENG]
    * Arreglado o HIT do Castelo do Caos. [TODAS AS VERSÕES]
    * Arreglado de congelamento de CustomMobs inválido. [TODAS AS VERSÕES]
    * Anexação de estatísticas adicionais de itens antigos [99B]
    * Arreglado os textos em chinês do Evento Kanturu. [S2KOR][S2PHI][S3KOR][S3TAI]
    * Arreglado o NPC de entrada em Land of Trial. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    * Cancele a reconexão para cancelar um duelo. [S4KOR]
    * Corrigido o problema de estabelecer a tarefa de comissão NPC e ChaosBox. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S4KOR][S6ENG][S8ENG]
    
    * Agregados os logs de penalidade em "GameServer\LOG\PENALTY_LOG". [TODAS AS VERSÕES]
    
    * Recriada a função HIT inexistente no Chaos Castle. [S0K]
    
    * Sistema ItemStack e ItemValue eliminado do cliente, sincronizado agora a partir do servidor. [TODAS AS VERSÕES]
    
    * Enviado MHPClient.dll para a Microsoft para excluí-lo de riscos potenciais. [TODAS AS VERSÕES]
    ATUALIZAÇÃO 65 (2.2.6):
    -----------------------------------------------------------------------------------------------------------------------------------
    * Novas opções de segurança agregadas em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (Configurações de penalidade de dado)
    * Novas opções de segurança agregadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (Configurações de Penalidade por Morte)
    ------------------------------------------------------------------------------------------------------------------------------------
    TaxaDeDeduçãoDeExperiência1 = % de experiência reduzida ao morrer (Status Herói)
    TaxaDeDeduçãoDeExperiência2 = % de experiência reduzida ao morrer (Status Plebeu)
    TaxaDeDeduçãoDeExperiência3 = % de experiência reduzida ao morrer (Status Nível PK1)
    TaxaDeDeduçãoDeExperiência4 = % de experiência reduzida ao morrer (Status Nível PK2)
    TaxaDeDeduçãoDeExperiência5 = % de experiência reduzida ao morrer (Status Assassino)
    TaxaDeQuedaDeItens1 = % de itens perdidos ao morrer (Status Herói)
    TaxaDeQuedaDeItens2 = % de itens perdidos ao morrer (Status Plebeu)
    TaxaDeQuedaDeItens3 = % de itens perdidos ao morrer (Status Nível PK1)
    TaxaDeQuedaDeItens4 = % de itens perdidos ao morrer (Status Nível PK2)
    TaxaDeQuedaDeItens5 = % de itens perdidos Ao morrer (Status de Assassino)
    DropItemLevel = Nível máximo dos itens que podem ser descartados.
    
    DropItemPet = Descarte de mascotes, 0 desativado, 1 ativado.
    
    DropItemWing = Descarte de asas, 0 desativado, 1 ativado.
    
    DropItemExc = Descarte de itens excelentes, 0 desativado, 1 a 6 opções excelentes.
    
    DropItemSet = Descarte de itens antigos, 0 desativado, 1 ativado.
    
    MoneyDeduceRate = % de perda de dinheiro ao morrer.
    
    ------------------------------------------------------------------------------------------------------------------------------------
    
    * Arreglado el drop de Dark Raven en PKItemDrop. [ALL VERSIONS]
    * Agregado sistema de extração de dinheiro ao morrer. [ALL VERSIONS]
    * Agregado sistema de extração de experiência ao morrer. [TODAS AS VERSÕES]
    
    * Opções removidas de [GameServer\DATA\GameServerInfo - Common.dat] [TODAS AS VERSÕES] (PKItemDropRatePvP1,PKItemDropRatePvP2,PKItemDropRatePvP3,PKItemDropRatePvM1,PKItemDropRatePvM2,PKItemDropRatePvM3,PKItemDropMaxLevel,PKItemDropPet,PKItemDropWing,PKItemDropExc,PKItemDropSet,PKItemDropJoH,PKItemDrop380)
    * Opções removidas de [GameServerCS\DATA\GameServerInfo - Common.dat] [TODAS AS VERSÕES] (PKItemDropRatePvP1,PKItemDropRatePvP2,PKItemDropRatePvP3,PKItemDropRatePvM1,PKItemDropRatePvM2,PKItemDropRat ePvM3,PKItemDropMaxLevel,PKItemDropPet,PKItemDropWing,PKItemDropExc,PKItemDropSet,PKItemDropJoH,PKItemDrop380)
    
    * Reparada a barra de experiência do cliente. [TODAS AS VERSÕES]
    * Reparada a adição e extração de experiência e dinheiro nas barras do cliente. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 64 (2.2.5-1):
    * Arreglado o problema da festa e da guilda ao movimento. [99B]
    * Arreglado problema de buff que desaparecia em versões coreanas. [S0KOR][S2KOR][S3KOR][S4KOR]
    * Problema resolvido de desconexões por MHP. [TODAS AS VERSÕES]
    
    * Agregado o console de depuração. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de conteúdo de passos anti hack. [TODAS AS VERSÕES]
    * Melhorou a segurança do cliente MHP no que diz respeito ao ByPass. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 63 (2.2.5):
    * Corrigido o problema bug do PersonalShop cheio. [TODAS AS VERSÕES]
    * Corrigido o bug visual dos animais de estimação em versões baixas. [99B][S0K][S2K][S2PHI][S3KOR][S3TAI]
    * Arreglado a caça de offhelper de itens superiores no slot 4. [S6][S8]
    * Arreglado o problema de caça com defeito no uso do espaço. [T6][T8]
    * Arreglado sistema de efeitos periódicos. [S2PHI][S3KOR][S3TAI]
    * Corrigido problema de inundação no ConnectServer. [TODAS AS VERSÕES]
    
    * Modificado o comando /attack <buff> <skill>. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 61 (2.2.4):
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (SelfDefenseTime)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (SelfDefenseTime)
    
    * Modificado o arquivo "Data\Custom\CustomJewel.txt" modifica opções para cada versão. [S0KOR][S2KOR][S2PHI][S3KOR][S3TAI][S6ENG][S8ENG]
    
    * Opções removidas de CustomBow e CustomItemBow até finalizar os erros. [S3KOR][S6ENG]
    
    * Reestruturado o sistema de CustomMonster para usar Monstruos com armas e armaduras. [TODAS AS VERSÕES]
    
    * Reestruturado o sistema de preços de compra de itens nas lojas. [TODAS AS VERSÕES]
    * Reestruturado o sistema de preços de venda de itens nas lojas. [TODAS AS VERSÕES]
    * Reestruturado o sistema de durabilidade em itens. [TODAS AS VERSÕES]
    * Reestruturado o sistema de preços de reparação de itens. [TODAS AS VERSÕES]
    
    * Opções removidas MinLevel,MaxLevel,MinExc e MaxExc em CustomEffect. [TODAS AS VERSÕES]
    
    * Reparado el Glow Excelente. [T8]
    
    ATUALIZAÇÃO 60 (2.2.3-2):
    * Reparado problema de desconexões aleatórias devido às medidas de segurança das conexões.
    
    * Opções de segurança removidas em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (MaxConnectionTime,MaxConnectionIdleTime,MaxConnectionVerifyTime,MaxConnectionPacketCount,MaxConnectionPacketTime)
    * Opções de segurança removidas em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (MaxConnectionTime,MaxConnectionIdleTime,MaxConnectionVerifyTime,MaxConnectionPacketCount,MaxConnectionPacketTime)
    
    * Automatizado o sistema de conexões. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 59 (2.2.3-1):
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Skill.dat". [99B] (DefenseConstA,DefenseTimeConstA)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Skill.dat". [99B] (DefenseConstA,DefenseTimeConstA)
    
    * Arreglado a habilidade dos escudos que não reduz o dano. [99B]
    * Corrigido o problema que congelou os oponentes ao fazer PvP. [S6]
    
    * Modificado CustomAttack guarda os dados ao reconectar. [TODAS AS VERSÕES]
    * Modificado CustomPick guarda os dados ao reconectar. [TODAS AS VERSÕES]
    * Modificadas as pontes LUA. (OnMonsterDie, OnUserDie, OnUserRespawn). [TODAS AS VERSÕES]
    
    * Melhorias na segurança da rede elétrica. [TODAS AS VERSÕES]
    * Melhorias na segurança de MHPClient.dll e MHPVerify.dll [TODAS AS VERSÕES]
    
    * Reformada a janela do ConnectionManager no MHPServer. [TODAS AS VERSÕES]
    
    * Opções removidas obsoletas e desativadas em "MHPServer\MHPServer.ini" [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 58 (2.2.3):
    * Novas opções de segurança agregadas em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (Configurações de segurança)
    * Novas opções de segurança agregadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (Configurações de segurança)
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomAttackRepair_ALX)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomAttackRepair_ALX)
    
    * Resolvido o problema de não poder unir-se no GuildMatching. [T8]
    * Arreglado o problema de não poder subir de nível os pentagramas com joias. [T8]
    * Arreglado o problema do Elemental Talisman eliminou igualmente itens ao subir Errtel. [T8]
    * Problema resolvido ao fazer ping que gera log de erros. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de limitação por IP ou HardwareId. [TODAS AS VERSÕES]
    * Melhorado o sistema de CustomAttack, reprogramação automática, detecção de habilidades e verificações. [TODAS AS VERSÕES]
    
    * Reformada a janela do ConnectionManager. [TODAS AS VERSÕES]
    
    * Melhorias na segurança interna das conexões. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 57 (2.2.2):
    * Arreglados dos métodos de travamento do servidor. [TODAS AS VERSÕES]
    * Arreglado bug de anjo duplo ou mascotes. [99B]
    * Arreglada a verificação de criação de novos clãs ou personagens. [TODAS AS VERSÕES]
    *Arreglado bug do Helper 3 horas rodando gerava crash. [T8]
    * Arreglado caracteres inválidos em funções de chave. [TODAS AS VERSÕES]
    * Corrigido o crash possível pelo NPC QuestWorld. [TODAS AS VERSÕES]
    * Arreglado el crash ao apuntar el ticket de kalima. [T8]
    * Arreglado o bug de não poder criar mascotes. [99B]
    * Reparada recompensa de Acheron Guardian, dupla recompensa. [T8]
    
    * Sistema reconstruído de monstros personalizados. [TODAS AS VERSÕES]
    
    * Eliminadas funções desnecessárias do servidor de jogos. [TODAS AS VERSÕES]
    * Eliminadas funções desnecessárias do principal. [TODAS AS VERSÕES]
    * Sistema eliminado do cliente LUA. [TODAS AS VERSÕES]
    
    * Melhorado sistema de segurança de caracteres inválidos. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 56 (2.2.1):
    * O arquivo "Data\EventItemBagManager.txt" foi modificado para agregar a recompensa do Illusion Temple 6 [S4][S6][S8]
    * O arquivo "Data\EventItemBagManager.txt" foi modificado para modificar o índice especial 14 ~ 17. [S8]
    * Modificado o arquivo "Data\EventItemBag\Special\Illusion Temple 1.txt" agregado com compensação correspondente. [T8]
    * Modificado o arquivo "Data\EventItemBag\Special\Illusion Temple 2.txt" agregado com compensação correspondente. [T8]
    * Modificado o arquivo "Data\EventItemBag\Special\Illusion Temple 3.txt" agregado com compensação correspondente. [T8]
    * Modificado o arquivo "Data\EventItemBag\Special\Illusion Temple 4.txt" agregado com compensação correspondente. [T8]
    * Modificado o arquivo "Data\EventItemBag\Special\Illusion Temple 5.txt" adicionado remcompensa correspondente. [T8]
    * Modificado o arquivo "Data\EventItemBag\Special\Illusion Temple 6.txt" adicionado remcompensa correspondente. [T8]
    * Modificado o spawn "Data\Monster\Spawn\045 - Illusion Temple 1.txt" [S8]
    * Modificado o spawn "Data\Monster\Spawn\045 - Illusion Temple 2.txt" [S8]
    * Modificado o spawn "Data\Monster\Spawn\045 - Illusion Temple 3.txt" [S8]
    * Modificado o spawn "Data\Monster\Spawn\045 - Illusion Temple 4.txt" [S8]
    * Modificado o spawn "Data\Monster\Spawn\045 - Illusion Temple 5.txt" [S8]
    * Modificado o spawn "Data\Monster\Spawn\045 - Illusion Temple 6.txt" [S8]
    * Modificado o arquivo "Data\MapServerInfo.txt" Agregado os mapas do Illusion Temple. [T8]
    * Modificado o arquivo "Data\MiniMap.txt" Modificada a localização do Mirage. [T8]
    
    * Evento agregado Renovação do Templo da Ilusão. [T8]
    * Agregado novo estado "READY" nos eventos DS,BC,CC e IT. [TODAS AS VERSÕES]
    * Agregado novo estado "READY" nos eventos Chaos Castle Final e Illusion Temple Renewal. [T8]
    
    * Nova mensagem no arquivo "Data\Message.txt" [ALL VERSIONS] (725~730) [ALL VERSIONS]
    
    * Reformada Acheron Tower agora aparece de diferentes elementos. [T8]
    * Reformado Acheron Event agora os mobs são o mesmo elemento que a torre. [T8]
    
    * Reparada falha na classificação em Chaos Castle Survival. [T8]
    
    ATUALIZAÇÃO 55 (2.2.0):
    * Tema agregado escuro aos executáveis. [TODAS AS VERSÕES]
    
    * Arreglado o efeito invisível. [99B]
    
    * Melhorado o sistema de conexões. [TODAS AS VERSÕES]
    * Melhorado o sistema de conexões TCP/UDP de entrada. [TODAS AS VERSÕES]
    * Melhor desempenho da interface. [TODAS AS VERSÕES]
    
    * Reformada a funcionalidade do arquivo GameMaster.txt usando "*" no Nome aplicado a todos os personagens. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 54 (2.1.9):
    * Corrigido o bug da sua loja pessoal que não poderia ser apagado ou modificado depois de usar o CustomStore. [S0][S2][S2PHI][S3][S3TAI][S6][S8]
    * Arreglado el crash el use teleport + sweel life. [99B]
    * Arreglado os ataques do RageFighter no modo offline. [T6][T8]
    * Arreglado a habilidade Dark Side. [S6]
    * Arreglado o viewport de efeito invisível. [TODAS AS VERSÕES]
    * Arreglado o bug do anjo que não sumaba os 50HP. [99B]
    
    * O arquivo "Data\Skill\HelperSkill.txt" eliminado é usado em seu lugar "Data\Custom\CustomAttack.txt". [T6][T8]
    
    * Reconstruído o sistema de efeitos. [TODAS AS VERSÕES]
    * Reconstruído o sistema de efeitos periódicos. [99B][S0][S2][S2PHI][S3][S3TAI]
    
    * Reformulada a funcionalidade do HackSkillSpeedCheck. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 53 (2.1.8-1):
    * Corrigido o travamento ao ler scripts com mais de 8.000 caracteres. [TODAS AS VERSÕES]
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomAttackPotion_ALX, CustomAttackPotionDelay_ALX)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomAttackPotion_ALX, CustomAttackPotionDelay_ALX)
    
    * Reestruturado com novas opções CustomAttack "Data\Custom\CustomAttack.txt" agrega velocidade. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 53 (2.1.8):
    * Corrigido o problema de perda de ManaShield ao mudar de mapa. [TODAS AS VERSÕES]
    * Melhore a leitura dos arquivos. [TODAS AS VERSÕES]
    * Melhore a leitura de licenças no servidor. [TODAS AS VERSÕES]
    * Melhore o sistema do Custom Attack. [TODAS AS VERSÕES]
    
    * Novo arquivo para configurar os danos recebidos nos mascotes em "Data\Util\PetDamageTable.txt" [TODAS AS VERSÕES]
    
    * Modificado o arquivo "Data\Custom\CustomArena.txt" adiciona uma opção para escolher o pacote de cada arena. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 52 (2.1.7):
    * Se arreglo crash por sobrelectura. [TODAS AS VERSÕES]
    * Se você resolver o problema listado no CustomPick. [TODAS AS VERSÕES]
    * Se ocorrer uma queda inesperada pelo uso da licença de autenticação. [TODAS AS VERSÕES]
    * Se arreglo ScriptCore.lua. [TODAS AS VERSÕES]
    
    * Opções eliminadas em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (CheckSkillSpeedAction,CheckSkillSpeedPenalty,ServerDebugger,ServerDebuggerName)
    * Opções eliminadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (CheckSkillSpeedAction,CheckSkillSpeedPenalty,ServerDebugger,ServerDebuggerName)
    
    * O arquivo "Data\Hack\HackSkillSpeedCheck.txt" foi modificado para adicionar novos métodos de filtro. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de ItemBag Avanzado. GradeCount aplica-se, durabilidade ou grau de itens. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 51 (2.1.6):
    * Nova mensagem no arquivo "Data\Message.txt" [ALL VERSIONS] (724) [ALL VERSIONS]
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Event.dat". [99B][S0][S2][S2PHI][S3][S3TAI][S6] (ChaosCastleMoneyRate)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Event.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (ChaosCastleMoneyRate)
    
    * Arreglado as habilidades do Cavaleiro das Trevas no Castelo do Caos. [99B]
    * Corrigido o erro de nome do mapa na festa. [99B]
    * Arregladas as frutas. [99B]
    * Arreglado a perda de buffs ao mover o mapa. [99B][S0][S2][S2PHI][S3][S3TAI]
    * Arreglado o problema de ter que se mover para voltar a comprar nas lojas. [99B]
    * Arreglado o problema de movimento com a maquina caos aberta. [99B]
    
    * Agregado suporte da Ponte LUA. [TODAS AS VERSÕES]
    * Agregada a recompensa ao azar no Chaos Castle. [TODAS AS VERSÕES]
    * Itens móveis agregados al baul, caosmix e comércio com clique direito. [99B]
    * Arquivos modificados LUA. [TODAS AS VERSÕES] (ScriptMain.lua, ScriptCore.lua e ScriptDefine.lua) (DEBE REMPLAZAR LA CARPETA SCRIPT O GENERARA CRASH)
    
    * Opções eliminadas em "GameServer\DATA\GameServerInfo - Common.dat". [99B] (FruitSubPointMin,FruitSubPointMax,FruitSubPointSuccessRate_ALX)
    * Opções eliminadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [99B] (FruitSubPointMin,FruitSubPointMax,FruitSubPointSuccessRate_ALX)
    
    Cliente:
    * Arreglado a janela de visualização para usar habilidade Twisth Slash, Inferno, Decay. [99B][S0][S2K][S2P]
    * Corrigido o problema que trababa as habilidades no PvP. [TODAS AS VERSÕES]
    
    * Melhorada a palestra de LUA. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 50 (2.1.5):
    * Arreglado o acidente em Atlans. [S2][S2P]
    * Arreglado o crash no jogo Battle Soccer. [TODAS AS VERSÕES]
    * Arreglado o crash no jogo War. [TODAS AS VERSÕES]
    
    * Agregado ao sistema de notícias do slide. [TODAS AS VERSÕES]
    
    * Eliminado o sistema de pontes LUA que causava travamento. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 49 (2.1.4):
    * Arreglado o sistema de criptografia do MHPServer. [TODAS AS VERSÕES]
    
    * Sistemas de licenciamento modificados. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 48 (2.1.3):
    * Problemas resolvidos de CustomAttack no MAINS. [TODAS AS VERSÕES]
    
    CLIENTE:
    * Implementação de LUA para desenvolvimento de estruturas. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 47 (2.1.2):
    * Corrigido o travamento ao finalizar o GuildWar. [TODAS AS VERSÕES]
    * Resolvido o problema que não finalizava o ataque ao usar habilidades. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de ataque. [TODAS AS VERSÕES]
    
    * O arquivo "Data\Custom\CustomAttack.txt" foi modificado para agregar velocidade. [TODAS AS VERSÕES]
    
    CLIENTE:
    * Nevoeiro agregado para mapas. [TODAS AS VERSÕES]
    
    * Corrigido um problema de câmera 3D. [S3][S3TAI]
    * Corrigido um bug de ataque a longa distância [99B]
    * Arreglado o problema de % no Chaos Mix. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 46 (2.1.1):
    * Corrigido o problema das notícias nas guildas. [TODAS AS VERSÕES]
    * Ajustou o módulo de LUA que causou travamentos. [TODAS AS VERSÕES]
    * Corrigido o bug da janela de visualização para usar determinadas habilidades. [TODAS AS VERSÕES]
    * Corrigido o problema da janela de visualização dos itens em movimento. [TODAS AS VERSÕES]
    * Arreglado a mensagem errada na parte de reconhecimento de itens. [99B]
    
    * Novas funções LUA (CommandSend,SetObjectWindowTitle) [TODAS AS VERSÕES]
    
    CLIENTE:
    * Corrigido o problema de habilitação do viewport + ataque normal. [99B][S0][S2][S2PHI][S3][S3TAI]
    * Arreglada a câmera 3D no Vale de Loren. [S3][S3TAI]
    * Resolvido o problema do ChaosMix. [TODAS AS VERSÕES]
    * Arreglado crash no ChaosMix. [S2PHI]
    * Ajustar a resolução 640x480. [TODAS AS VERSÕES]
    
    * Funções agregadas de LUA de mudança de título de janela. [TODAS AS VERSÕES]
    * Agregado o separador de chat. [T4][T6]
    
    ATUALIZAÇÃO 45 (2.1.0):
    * Corrigido o erro da Guilda com usuários conectados. [TODAS AS VERSÕES]
    * Arreglado o problema das taxas inválidas na criação de animais de estimação. [TODAS AS VERSÕES]
    * Arreglado el crash por lectura de lua masivos. [TODAS AS VERSÕES]
    * Arreglado Viewport el cerrar el Guild. [TODAS AS VERSÕES]
    * Arreglado Viewport ao abrir o baul. [TODAS AS VERSÕES]
    * Arreglado problema de quest diarias invalidas. [T6][T8]
    
    * Agregado para consolar debug a entrada de opções antigas. [TODAS AS VERSÕES]
    
    * Reestruturado o antigo sistema de lojas e comandos. [TODAS AS VERSÕES]
    
    * Aprimorou a leitura de scripts de pontes LUA por meio de aulas estatísticas. [TODAS AS VERSÕES]
    
    
    CLIENTE:
    * Arreglado o erro de câmera com quadros negros. [99B]
    * Arreglado a mensagem de taxa e dinheiro na criação de mascotes DL. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 44 (2.0.9):
    * Resolvido o problema da janela de visualização com itens antigos. [TODAS AS VERSÕES]
    * Resolva o problema da janela de visualização ao equipar itens. [TODAS AS VERSÕES]
    * Arregladas auras de itens conjuntos antigos completos. [TODAS AS VERSÕES]
    * Arreglados atributos de itens antigos. [S3][S3TAI]
    * Acerte as taxas em tempo real do Pet Trainer. [99B]
    * Arreglado a janela de visualização dos anéis de transformação. [99B][S0]
    * Arreglado o Double Damage em Ancient. [TODAS AS VERSÕES]
    * Arreglado o teletransporte no Estádio de Lorencia. [TODAS AS VERSÕES]
    * Corrija o problema das notícias de clãs que não são guardadas. [TODAS AS VERSÕES]
    
    * Redesenhou o sistema de guildas. [99B]
    * Redisenado o sistema de guerra de guildas. [TODAS AS VERSÕES]
    * Redesenhou o sistema de conexões. [TODAS AS VERSÕES]
    
    * Melhorias na mudança de mapa entre servidores. [TODAS AS VERSÕES]
    * Melhores em ViewCharSet. [TODAS AS VERSÕES]
    * Melhor visualizador de mapa. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 43 (2.0.8):
    * Corrija o problema do Viewport ao usar a janela Move. [TODAS AS VERSÕES]
    * Arreglado o Battle Soccer que não move a pelota. [99B]
    * Arreglado Skill Splash e outros que não podem ser colocados em certas posições. [TODAS AS VERSÕES]
    * Arreglado o Skill Heal no Party of Helper Offline. [T6][T8]
    * Corrigido o crash com a habilidade Twisth Slash. [99B]
    
    * Redesenhou o sistema de Battle Soccer. [TODAS AS VERSÕES]
    * Redisenado todo o sistema de protocolos de versões antigas. [99B][S0][S2][S3]
    
    * Melhor desempenho dos executáveis.[TODAS AS VERSÕES]
    * Melhorado o sistema de segurança anti-inundação. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 42 (2.0.7):
    * Arreglado o problema das portas do cerco do castelo. [TODAS AS VERSÕES]
    * Corrigido o problema da habilidade de teletransporte que deixou você passar pelas portas do CS. [TODAS AS VERSÕES]
    * Corrigido o problema da habilidade Party Summon que deixou de passar pelas portas do CS. [TODAS AS VERSÕES]
    * Resolvido o problema do Viewport depois de usar a habilidade Summon Party. [TODAS AS VERSÕES]
    * Arreglado a probabilidade de usar habilidades na LUA. [TODAS AS VERSÕES]
    * Corrigido um problema de ataque personalizado que foi detectado nas 24 horas de uso. [TODAS AS VERSÕES]
    
    * Agregados os novos pacotes ao comando pack e unpack. [S0][S2][S2PHI][S3][S3TAI][S4]
    
    * O arquivo "Data\Item\Item.txt" modificado foi adicionado aos pacotes [S0][S2][S2PHI][S3][S3TAI][S4] (seção 12, do item 136 ao item 143)
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (Configurações personalizadas da loja e configurações personalizadas do pacote de joias)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (Configurações personalizadas da loja e configurações personalizadas do pacote de joias)
    
    * Melhores no sistema lua. [TODAS AS VERSÕES]
    
    CLIENTE:
    * Linhas agregadas no Text_xxx.bmd [1792~1799] [S0][S2][S2PHI][S3][S3TAI][S4]
    * Linhas modificadas no Text_xxx.bmd [1806,1807,1819] [S0][S2][S2PHI][S3][S3TAI][S4]
    * Agregados os pacotes em Item_xxx.bmd [S0][S2][S2PHI][S3][S3TAI][S4] (seção 12, do item 136 ao item 143)
    
    ATUALIZAÇÃO 41 (2.0.6):
    * Corrigido o problema do CustomAttack que não pôde ser ativado nos eventos. [TODAS AS VERSÕES]
    * Arreglado o MonsterMove que às vezes não move automaticamente o NPC. [TODAS AS VERSÕES]
    * Foi registrado um protocolo inválido que gerou problemas de conexão. [TODAS AS VERSÕES]
    * Corrigido um problema com a função ItemGive Lua. [TODAS AS VERSÕES]
    * Arreglado os excessos de PCPoints e WCoin ao vender na loja. [S2][S2PHI][S3][S3TAI][S4]
    * Arreglado efeitos visuais +13 em MAINS. [S0][S2][S2PHI][S3][S3TAI][S4]
    
    * Agregadas 3 novas caixas "Green Box,Red Box,Purple Box" no ItemBagManager. [T6][T8]
    * Sistema de missão agregado de todos os NPCs. [Elf Buffer, Zebina, Tercia, Gens, Zyro, Derubish] [S6][S8]
    
    * Modificado o arquivo "Data\Item\ItemStack.txt" Foi adicionado 3 itens à missão. [T6][T8]
    * Modificado o arquivo "Data\Monster\MonsterMove.txt" Reestrutura o sistema de monstros que se warpean. [TODAS AS VERSÕES]
    * Modificado o arquivo "Data\Quest\Quest.txt" Reestrutura o sistema de busca. [TODAS AS VERSÕES]
    * Modificado o arquivo "Data\Quest\QuestObjective.txt" O sistema de busca foi reestruturado. [TODAS AS VERSÕES]
    * Modificado o arquivo "Data\Quest\QuestReward.txt" O sistema de busca foi reestruturado. [TODAS AS VERSÕES]
    * Modificado o arquivo "Data\QuestWorld\QuestWorld.txt" O sistema de busca foi reestruturado. [T6][T8]
    * Modificado o arquivo "Data\QuestWorld\QuestWorldObjective.txt" O sistema de busca foi reestruturado. [T6][T8]
    * Modificado o arquivo "Data\QuestWorld\QuestWorldReward.txt" O sistema de busca foi reestruturado. [T6][T8]
    * O arquivo "Data\EventItemBagManager.txt" foi modificado e reestruturou o arquivo e adicionou 3 novas caixas. [TODAS AS VERSÕES]
    
    * Melhor sistema de leitura de vários arquivos. [TODAS AS VERSÕES]
    * Melhorou a carga de monstros. [TODAS AS VERSÕES]
    
    *** IMPORTANTE: SE RECOMIENDA EJECUTAR LA SENTENCIA "DELETE QuestWorld" EN SQL PARA BORRAR TODAS AS QUESTWORLD ANTERIORES, EN CASO DE NO HACERLO PUEDE GENERAR PROBLEMAS. ***
    
    ATUALIZAÇÃO 40 (2.0.5):
    * Corrigido o problema que o comando offattack não mantinha conectado às pessoas. [TODAS AS VERSÕES]
    
    * Agregado ao comando ClearInventory que não há erros de itens de eventos (BC e IT). [TODAS AS VERSÕES]
    * Agregado o filtro para usar os comandos Attack, Pick, Store com a função MapZone. (-1: TODOS os mapas, 0,10: Ejemplo Lorencia e Icarus) [TODAS AS VERSÕES]
    
    * Modificada a mensagem no arquivo "Data\Message.txt" [ALL VERSIONS] (454) [ALL VERSIONS]
    * Nova mensagem no arquivo "Data\Message.txt" [TODAS AS VERSÕES] (459.460) [TODAS AS VERSÕES]
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomAttackMapZone,CustomPickMapZone)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomAttackMapZone,CustomPickMapZone)
    
    * Modificado o arquivo "Data\Custom\CustomPick.txt" [TODAS AS VERSÕES]
    
    * Opções eliminadas em "GameServer\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomAttackPickEnable_ALX,CustomAttackOfflinePickEnable_ALX,CustomPickMaxItemList)
    * Opções eliminadas em "GameServerCS\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomAttackPickEnable_ALX,CustomAttackOfflinePickEnable_ALX,CustomPickMaxItemList)
    
    ATUALIZAÇÃO 39 (2.0.4-1):
    * Corrigido o problema de travamento nas notícias da guilda. [TODAS AS VERSÕES]
    * Arreglado o problema preso ao portar marcotas. [TODAS AS VERSÕES]
    * Resolva o problema de lua de algumas funções. [TODAS AS VERSÕES]
    
    * Arreglado o plugin 3 da rede. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 38 (2.0.4):
    * Corrigido o problema de desconexão no Windows XP, Windows 7. [TODAS AS VERSÕES]
    * Resolvido o problema de compatibilidade de DLL's externas. [TODAS AS VERSÕES]
    * Arreglado o acidente para matar o Kundum em mapas que não são de Sean Kalima. [TODAS AS VERSÕES]
    
    * Modificado o arquivo "Data\Util\Notice.txt" Reestrutura o sistema de notícias. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de criação de janelas de versões baixas. [S0]
    
    * Atualizado o sistema de lua em 5.3.1. [TODAS AS VERSÕES]
    * Atualizado o sistema de conexões de Socket TCP e UDP. [TODAS AS VERSÕES]
    
    CLIENTE:
    
    * Melhorado o sistema de carregamento de textos. [TODAS AS VERSÕES]
    * Implementado sistema de efeitos estatísticos, dinâmicos e especiais. [TODAS AS VERSÕES]
    
    * Removido o sistema CustomEffectWing. [T6][T8]
    
    ATUALIZAÇÃO 37 (2.0.3):
    * Novo arquivo para configurar o uso de habilidades em "Data\Skill\SkillEnabler.txt". [TODAS AS VERSÕES]
    
    * Modificado o arquivo "Data\Event\EventEntryLevel.dat". [TODAS AS VERSÕES] (estrutura modificada)
    
    * Arreglado o Custom Luke Helper. [TODAS AS VERSÕES]
    * Arreglado o Golden Archer, agora resta 1 item. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de filtração de palavras. [TODAS AS VERSÕES]
    * Melhorado o sistema de hilos em multiprocessadores. [TODAS AS VERSÕES]
    
    * Nova mensagem no arquivo "Data\Message.txt" [ALL VERSIONS] (723) [ALL VERSIONS]
    
    CLIENTE:
    
    * Melhorado o rendimento do cliente. [TODAS AS VERSÕES]
    * Implementado o sistema de EventEntryLevel. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 36 (2.0.2):
    * Configure a ferramenta para gerar o Item.bmd. [S0][S2][S2PHI][S3][S3TAI][S4][S4E][S6]
    * Configure a função lua CreateMonster. [TODAS AS VERSÕES]
    * Corrigido o problema de perda de ManaShield ao mudar de mapa. [S0][S2][S2PHI][S3][S3TAI]
    * Arreglado o arqueiro dourado que não consome as renas corretamente.[S0][S2][S2PHI][S3][S3TAI][S4][S4E][S6]
    * Resolvido o problema que não foi possível desconectar as contas no ataque. [S0][S2][S2PHI][S3][S3TAI][S4][S4E]
    * Arreglado o problema que não poderia desconectar pessoas do menu. [TODAS AS VERSÕES]
    * Arreglado o acidente do castelo do caos 6. [S0]
    * Arreglado problema de experiência em nível master. [T6][T8]
    * Ajustado Viewport para mudança de servidor. [TODAS AS VERSÕES]
    * Arreglado o sistema de criação de personagens por nível ocultando desnecessários ou incapacitados. [TODAS AS VERSÕES]
    * Anote as cartas de criação de personagens. [T6][T8]
    * Problemas de desconexões resolvidos. [TODAS AS VERSÕES]
    * Corrigido o problema do drop antigo de ItemOptionRate. [TODAS AS VERSÕES]
    
    * Sistema de pontes agregado a Scripting LUA em "Script\Bridge" [TODAS AS VERSÕES]
    * Agregado ativação rápida do comando "/attack". [TODAS AS VERSÕES]
    * MonsterSkin agregado para personalizar CustomMonsters com armaduras. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de fontes da rede elétrica. [TODAS AS VERSÕES]
    
    * O arquivo "GameServer\DATA\GameServerInfo - Common.dat" foi modificado para adicionar a opção "CheckLiveSecurity" para desativar a segurança em tempo real. [TODAS AS VERSÕES]
    * Modificados o arquivo "Data\Item\ItemOptionRate.txt" incorporam novas opções para eliminar o antigo(Seção 5). [TODAS AS VERSÕES]
    * O arquivo "Data\Item\SetItemOption.txt" modificado é agregado a OptionIndex2. [S0][S2][S2PHI][S3][S3TAI]
    * O arquivo "Data\Item\SetItemOption.txt" modificado é agregado a OptionIndex2. [S0][S2][S2PHI][S3][S3TAI]
    
    * Novas funções LUA. (MessageSend,MessageSendToAll) Ver(Script Lua Interface Functions)[TODAS AS VERSÕES]
    
    Cliente:
    * Sistema agregado de multilíngue aos clientes [S0][S2][S2PHI][S3][S3TAI][S4]
    * Combine o CustomMessage.txt com Text_XXX.bmd. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 35 (2.0.1):
    * Novos comandos agregados em "Data\CommandManager.txt" (Offline) [S6][S8](21)
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [S6][S8] (WriteScriptLog, Configurações Offline do Helper)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Common.dat". [S6][S8] (WriteScriptLog, Configurações Offline do Helper)
    
    * Nova opção adicionada em "GameServer\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomArenaMapNumber, CustomAttack, Configurações Offline do CustomAttack)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomArenaMapNumber, CustomAttack, Configurações Offline do CustomAttack)
    
    * Novo arquivo para configurar as propriedades das habilidades do OffHelper em "Data\Skill\HelperSkill.txt". [T6][T8]
    
    * Modificado o arquivo "Data\Custom\CustomAttack.txt" foi reestruturado o arquivo. [TODAS AS VERSÕES]
    * O arquivo "Data\Custom\CustomLukeHelper.txt" foi modificado para agregar a classe mob. [TODAS AS VERSÕES]
    * Modificado o arquivo "Data\MapServerInfo.txt" Agregado os mapas do Acheron Guardian. [T8]
    * Modificado o arquivo "Data\Util\Notice.txt" Reestrutura o sistema de notícias. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de leitura de scripts. [TODAS AS VERSÕES]
    * Melhorado o sistema de scripts LUA. [TODAS AS VERSÕES]
    
    * Reconstruida a IA dos mobs que não têm inteligência programada. [TODAS AS VERSÕES]
    * Reconstruída a IA dos monstros invocados. [TODAS AS VERSÕES]
    
    * Configure a opção Auto Aceitar membros da Guilda em Helper/Offhelper. [T8]
    * Arreglado o MonsterSchedule. [TODAS AS VERSÕES]
    * Configure o sistema de criação de personagens por cartas. [S4][S6][S8]
    * Arreglado o sistema de respawn nos mesmos mapas onde murio. [TODAS AS VERSÕES]
    * Corrigido o problema do SD Ratio. [S2][S2PHI][S3][S3TAI][S4][S4E][S6][S8]
    
    * Sistema agregado de OffHelper em modo BETA 1. [S6][S8]
    * Ferramenta agregada para gerar Item.bmd. [S0][S2][S2PHI][S3][S3TAI][S4][S4E][S6]
    
    * Opções eliminadas em "GameServer\DATA\GameServerInfo - Common.dat". [S6][S8] (HelperActiveMaxTime_AL3)
    * Opções eliminadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S6][S8] (HelperActiveMaxTime_AL3)
    
    ATUALIZAÇÃO 34 (2.0.0):
    * Arreglado o problema de excesso de aumento do índice SD que superou os 100%. [TODAS AS VERSÕES]
    * Resolvido o problema de usar várias habilidades no CustomAttack. [TODAS AS VERSÕES]
    * Corrigido o problema dos aleatórios em ItemBag e ItemBagEx. [TODAS AS VERSÕES]
    * Arreglar as lojas por moedas. [TODAS AS VERSÕES]
    
    * Arreglado o acidente do castelo do caos 6. [S0]
    * Arreglado problema de experiência em nível master. [T6][T8]
    * Ajustado Viewport para mudança de servidor. [TODAS AS VERSÕES]
    * Arreglado o sistema de criação de personagens por nível ocultando desnecessários ou incapacitados. [TODAS AS VERSÕES]
    * Anote as cartas de criação de personagens. [T6][T8]
    * Problemas de desconexões resolvidos. [TODAS AS VERSÕES]
    * Corrigido o problema do drop antigo de ItemOptionRate. [TODAS AS VERSÕES]
    
    * Sistema de pontes agregado a Scripting LUA em "Script\Bridge" [TODAS AS VERSÕES]
    * Agregado ativação rápida do comando "/attack". [TODAS AS VERSÕES]
    * MonsterSkin agregado para personalizar CustomMonsters com armaduras. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de fontes da rede elétrica. [TODAS AS VERSÕES]
    
    * O arquivo "GameServer\DATA\GameServerInfo - Common.dat" foi modificado para adicionar a opção "CheckLiveSecurity" para desativar a segurança em tempo real. [TODAS AS VERSÕES]
    * Modificados o arquivo "Data\Item\ItemOptionRate.txt" incorporam novas opções para eliminar o antigo(Seção 5). [TODAS AS VERSÕES]
    * O arquivo "Data\Item\SetItemOption.txt" modificado é agregado a OptionIndex2. [S0][S2][S2PHI][S3][S3TAI]
    * O arquivo "Data\Item\SetItemOption.txt" modificado é agregado a OptionIndex2. [S0][S2][S2PHI][S3][S3TAI]
    
    * Novas funções LUA. (MessageSend,MessageSendToAll) Ver(Script Lua Interface Functions)[TODAS AS VERSÕES]
    
    Cliente:
    * Sistema agregado de multilíngue aos clientes [S0][S2][S2PHI][S3][S3TAI][S4]
    * Combine o CustomMessage.txt com Text_XXX.bmd. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 35 (2.0.1):
    * Novos comandos agregados em "Data\CommandManager.txt" (Offline) [S6][S8](21)
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [S6][S8] (WriteScriptLog, Configurações Offline do Helper)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Common.dat". [S6][S8] (WriteScriptLog, Configurações Offline do Helper)
    
    * Nova opção adicionada em "GameServer\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomArenaMapNumber, CustomAttack, Configurações Offline do CustomAttack)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Custom.dat". [TODAS AS VERSÕES] (CustomArenaMapNumber, CustomAttack, Configurações Offline do CustomAttack)
    
    * Novo arquivo para configurar as propriedades das habilidades do OffHelper em "Data\Skill\HelperSkill.txt". [T6][T8]
    
    * Modificado o arquivo "Data\Custom\CustomAttack.txt" foi reestruturado o arquivo. [TODAS AS VERSÕES]
    * O arquivo "Data\Custom\CustomLukeHelper.txt" foi modificado para agregar a classe mob. [TODAS AS VERSÕES]
    * Modificado o arquivo "Data\MapServerInfo.txt" Agregado os mapas do Acheron Guardian. [T8]
    * Modificado o arquivo "Data\Util\Notice.txt" Reestrutura o sistema de notícias. [TODAS AS VERSÕES]
    
    * Melhorado o sistema de leitura de scripts. [TODAS AS VERSÕES]
    * Melhorado o sistema de scripts LUA. [TODAS AS VERSÕES]
    
    * Reconstruida a IA dos mobs que não têm inteligência programada. [TODAS AS VERSÕES]
    * Reconstruída a IA dos monstros invocados. [TODAS AS VERSÕES]
    
    * Configure a opção Auto Aceitar membros da Guilda em Helper/Offhelper. [T8]
    * Arreglado o MonsterSchedule. [TODAS AS VERSÕES]
    * Configure o sistema de criação de personagens por cartas. [S4][S6][S8]
    * Arreglado o sistema de respawn nos mesmos mapas onde murio. [TODAS AS VERSÕES]
    * Corrigido o problema do SD Ratio. [S2][S2PHI][S3][S3TAI][S4][S4E][S6][S8]
    
    * Sistema agregado de OffHelper em modo BETA 1. [S6][S8]
    * Ferramenta agregada para gerar Item.bmd. [S0][S2][S2PHI][S3][S3TAI][S4][S4E][S6]
    
    * Opções eliminadas em "GameServer\DATA\GameServerInfo - Common.dat". [S6][S8] (HelperActiveMaxTime_AL3)
    * Opções eliminadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S6][S8] (HelperActiveMaxTime_AL3)
    
    ATUALIZAÇÃO 34 (2.0.0):
    * Arreglado o problema de excesso de aumento do índice SD que superou os 100%. [TODAS AS VERSÕES]
    * Resolvido o problema de usar várias habilidades no CustomAttack. [TODAS AS VERSÕES]
    * Corrigido o problema dos aleatórios em ItemBag e ItemBagEx. [TODAS AS VERSÕES]
    * Arreglar as lojas por moedas. [TODAS AS VERSÕES]
    
    Cliente:
    * Arreglado desborde de la barra reconnect.[TODAS AS VERSÕES]
    
    [Text.bmd] Linha 484-1156-1167 [S2PHI]
    [GetMainInfo.txt] Eliminado DisableMonsterHealthBarKeys
    [GetMainInfo.txt] Eliminado DisableCamera3DKeys
    [GetMainInfo.txt] Eliminado DisableMinimizeTrayKeys
    [GetMainInfo.txt] Adicionado KeyCodeHealthBarSwitch [S0][S2][S2PHI][S3][S3TAI][S4][S4E][S6]
    [GetMainInfo.txt] Adicionado KeyCodeCamera3DSwitch [TODAS AS VERSÕES]
    [GetMainInfo.txt] Adicionado KeyCodeCamera3DRestore [TODAS AS VERSÕES]
    [GetMainInfo.txt] Adicionado KeyCodeTrayModeSwitch [TODAS VERSÕES]
    
    ATUALIZAÇÃO 32:
    * Se reparar conexões automáticas ao inserir diversas pessoas em eventos. [TODAS AS VERSÕES]
    * Se reparar bug de caminhada fantasma em Castle Siege. [TODAS AS VERSÕES]
    * Se reparar um erro no Helper que ocasionou sua parada crítica. [S6]
    
    * O arquivo "Data\Hack\HackSkillSpeedCheck.txt" foi modificado para adicionar novos métodos de filtro. [TODAS AS VERSÕES]
    
    * Eliminado o arquivo "Data\Hack\HackChecksumCheck.txt". [TODAS AS VERSÕES]
    * Opções eliminadas em "GameServer\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI] (PartyMaxMember,PartyGeneralExperience6,PartyGeneralExperience7,PartyGeneralExperience8,PartyGeneralExperience9,PartyGeneralExperience10,PartySpecialExperience6,PartySpecialExperience7,PartySpecialExperience8,PartySpecialExperience9,PartySpecialExperience10)
    * Opções eliminadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI] (PartyMaxMember,PartyGeneralExperience6,PartyGeneralExperience7,PartyGeneralExperience8,PartyGeneralExperience9,PartyGeneralExperience10,PartySpecialExperience6,PartySpecialExperience7,PartySpecialExperience8,PartySpecialExperience9,PartySpecialExperience10)
    
    Cliente:
    * Limpe o cliente de falsos positivos.
    * Limpe o MHPClient.dll de falsos positivos.
    * Se reparar falso acidente. [T6][T8]
    * Se eliminar o sistema checksum em tempo real por falsos positivos.
    * Se arreglo problema das jaulas de estádio que desconectaban.
    
    ATUALIZAÇÃO 31:
    * Serão reestruturadas diversas coisas nos executáveis. [TODAS AS VERSÕES]
    * Melhore o desempenho. [TODAS AS VERSÕES]
    * Se você quiser adicionar a versão BETA com LUA. [TODAS AS VERSÕES]
    * Melhore a janela de conexões de usuários. [TODAS AS VERSÕES]
    * Se agregar suporte para a temporada 4, episódio 6. [S4E]
    
    Cliente:
    * Se reestrutura todo o sistema principal.
    * Se agrego suporte para inyeccion al main.
    * Implemente melhorias no OpenGL.
    * Corrija o problema de velocidade principal.
    * Se agregar corretamente o sistema CRC.
    
    ATUALIZAÇÃO 30:
    * Arreglado o PartyExperience. [TODAS AS VERSÕES]
    * Resolva os problemas de CustomMonster em CustomNPCCollector, CustomNPCMove e MonsterSchedule. [TODAS AS VERSÕES]
    * Arreglados efeitos buffs auras ELF. [S0][S2][S2PHI][S3][S3TAI]
    * Arreglado mensagem invalida post. [T8]
    
    * UI agregada de MapViewer e GameServers. [TODAS AS VERSÕES]
    * Detecção automática agregada à opção MaxPacketPerSecond do servidor de jogos. [TODAS AS VERSÕES]
    * Verificação agregada de checksum ao cliente em "Data\Hack\HackChecksumCheck.txt". [TODAS AS VERSÕES]
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI] (PartyMaxMember,PartyGeneralExperience6,PartyGeneralExperience7,PartyGeneralExperience8,PartyGeneralExperience9,PartyGeneralExperience10,PartySpecialExperience6,PartySpecialExperience7,PartySpecialExperience8,PartySpecialExperience9,PartySpecialExperience10)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI] (PartyMaxMember,PartyGeneralExperience6,PartyGeneralExperience7,PartyGeneralExperience8,PartyGeneralExperience9,PartyGeneralExperience10,PartySpecialExperience6,PartySpecialExperience7,PartySpecialExperience8,PartySpecialExperience9,PartySpecialExperience10)
    
    Cliente:
    * Arregladas las camaras 3D e ampliadas seus rangos. [TODAS AS VERSÕES]
    * Arreglado crash CustomMaps. [S0]
    * Estendido a festa até 10 pessoas. [S0][S2][S2PHI][S3][S3TAI]
    
    * CustomMonster e CustomNPC podem escolher os tapetes para usar. [TODAS AS VERSÕES]
    
    * Melhorou o suporte do CustomMap e adicionou efeitos aos mapas. [TODAS AS VERSÕES]
    * Melhoradas a interface do Reconnect. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 29:
    * Arreglado o relógio de Double Goer. [T6][T8]
    * Arreglado o relógio do Guardião Imperial. [T6][T8]
    * Arreglado o problema que não poderia criar clanes com 8 letras. [TODAS AS VERSÕES]
    * Arreglado o acidente de GS em duelo com ShieldGaugeDisable em 1. [S6][S8]
    
    * Melhorado o sistema anti-inundação. [TODAS AS VERSÕES]
    
    * Novas interfaces de usuário agregadas de ConnectionList em GameServers. [TODAS AS VERSÕES]
    * Nova UI agregada de DetectionList em MHPServer.
    
    * Removido da versão oficial do suporte LUA (Solo em BETA). [TODAS AS VERSÕES]
    
    * Opções eliminadas em "ConnectServer\ConnectServer.ini". [TODAS AS VERSÕES] (MaxIpConnection,MaxPacketCount,MaxPacketDelay,TimeoutDisconnect,VerifyTimeoutDisconnect,AutomaticLockSwitch,AutomaticLockTime)
    * Opções removidas em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (DebugCharName,MaxPacketTime,MaxPacketCount,DSJSMaxPacketTime,DSJSMaxPacketCount,TimeoutDisconnect,VerifyTimeoutDisconnect,MaxIpConnection,MaxHidConnection)
    * Opções removidas em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (DebugCharName,MaxPacketTime,MaxPacketCount,DSJSMaxPacketTime,DSJSMaxPacketCount,TimeoutDisconnect,VerifyTimeoutDisconnect,MaxIpConnection,MaxHidConnection)
    * Opções removidas em "MHPServer\MHPServer.ini". [TODAS AS VERSÕES] (MHPServerPort,MaxIpConnection,MaxHidConnection,MaxPacketCount,MaxPacketDelay,TimeoutDisconnect,VerifyTimeoutDisconnect)
    
    * Nova opção adicionada em "ConnectServer\ConnectServer.ini". [TODAS AS VERSÕES] (MaxConnectionIdle,MaxConnectionPerIP,MaxPacketPerSecond)
    * Nova opção adicionada em "GameServer\DATA\GameServerInfo - Character.dat". [TODAS AS VERSÕES] (DamageStuckOnPetUniria,DamageStuckOnPetDinorant,DamageStuckOnPetDarkHorse,DamageStuckOnPetFenrir)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Character.dat". [TODAS AS VERSÕES] (DamageStuckOnPetUniria,DamageStuckOnPetDinorant,DamageStuckOnPetDarkHorse,DamageStuckOnPetFenrir)
    * Nova opção adicionada em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (ServerDebuggerName,MaxConnectionIdle,MaxConnectionPerIP,MaxConnectionPerHID,MaxPacketPerSecond,MaxTimeConnectionVerify)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (ServerDebuggerName,MaxConnectionIdle,MaxConnectionPerIP,MaxConnectionPerHID,MaxPacketPerSecond,MaxTimeConnectionVerify)
    * Nova opção adicionada em "MHPServer\MHPServer.ini". [TODAS AS VERSÕES] (MHPServerPortTCP,MaxConnectionIdle,MaxConnectionPerIP,MaxConnectionPerHID,MaxPacketPerSecond)
    
    ATUALIZAÇÃO 28:
    * Resolva os problemas de consumo excessivo de memória em geral. [S0][S2][S2PHI][S3][S3TAI]
    * Corrigido o problema do HackSkillSpeedCheck que não poderia fornecer vários valores por rangos. [TODAS AS VERSÕES]
    * Agregados Escudos faltantes e corrigidos el set aura. [S4]
    * Resolva os problemas de cliques na rede. [S0][S2][S2PHI][S3][S3TAI][S4][S8]
    * Corrigido o problema de OZT em CustomMaps. [S0]
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (DebugCharName)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (DebugCharName)
    
    * O arquivo "Data\Item\Item.txt" foi modificado para agregar o Cross Shield [S4]
    * Modificado o arquivo "Data\Script\ScriptMain.lua". [TODAS AS VERSÕES]
    
    * Finalizado o sistema de Scripts LUA. [TODAS AS VERSÕES]
    * Reduziu o consumo de CPU em todas as redes.
    
    ATUALIZAÇÃO 27-3:
    * Arreglado o problema que não poderia fazer lojas com monstros personalizados. [TODAS AS VERSÕES]
    * Corrigido o problema de que não era possível usar monster custom como CustomNPCMove,CustomNPCCollector. [TODAS AS VERSÕES]
    * Arreglado a pedra da vida que dropa itens e daba experiência para destruí-lo. [TODAS AS VERSÕES]
    * Arreglado o problema dos mercenários invencíveis. [TODAS AS VERSÕES]
    * Arreglado o OnlineReward que não funcionou. [S2PHI]
    * Corrigido o problema de velocidade do invocador. [S4]
    
    * Sistema de scripts agregado em "Data\Script\ScriptMain.lua". [TODAS AS VERSÕES]
    * Agregados os logs de Scripts em "GameServer\LOG\SCRIPT_LOG". [TODAS AS VERSÕES]
    * Referências agregadas de Scripts em "Tools\Reference Scripts Lua.txt". [TODAS AS VERSÕES]
    
    * O arquivo "Data\Event\BloodCastle.dat" foi modificado para agregar as estátuas. [TODAS AS VERSÕES]
    * O arquivo "Data\Monster\MonsterList.txt" foi modificado para separar MOB/NPC e resistências 5,6,7. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 27 (1-2):
    * Vista panorâmica dos fogos de artifício. [TODAS AS VERSÕES]
    * Visor arreglado de los Heart,Medalha de Prata,Medalha de Ouro. [TODAS AS VERSÕES]
    * Resolvido o problema de travamento ao finalizar um GuildWar. [TODAS AS VERSÕES]
    * Problema de bloqueio de bloqueio no GameServer. [TODAS AS VERSÕES]
    * Problema resolvido de desconexão do servidor MHP.
    * Arreglada la desaparicion de los clanes na atualização v 1.0.2.4 a 1.0.2.5 [TODAS AS VERSÕES]
    * Arreglado a janela de visualização de itens e mobs que aparecem em locais "seguros". [TODAS AS VERSÕES]
    * Resolvido o problema de reinicialização. [TODAS AS VERSÕES]
    * Corrigido o problema que não foi exibido no nome correto no CustomPick. [TODAS AS VERSÕES]
    * Resolvido o problema de clãs ao mudar de nome por comando. [TODAS AS VERSÕES]
    * Corrigido o erro visual do ManaShield que foi eliminado ao mudar o mapa. [S0][S2][S2PHI][S3][S3TAI]
    * Corrigido o problema de notícias no GameServerCS. [TODAS AS VERSÕES]
    * Arreglado o grupo de buffs intermináveis ​​no comando attack. [TODAS AS VERSÕES]
    * Arreglado customattack que precisa de todas as habilidades detalhadas para o nível master. [T6][T8]
    * Arreglado o futebol de batalha. [TODAS AS VERSÕES]
    * Arreglado o Gerente de Invasão. [TODAS AS VERSÕES]
    * Corrija o problema de recarga de monstros. [TODAS AS VERSÕES]
    * Arreglado o bloqueio de HardWareId em MHPServer.
    
    * Melhorado o sistema DDoS em GameServer, HackServer e ConnectServer. [TODAS AS VERSÕES]
    
    * Novas mensagens no arquivo "Data\Message.txt" [TODAS AS VERSÕES] (712)
    
    * Agregado o LauncherMutex para escolher um nome de mutex compatível com seu launcher. [TODAS AS VERSÕES]
    
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Common.dat". [S6][S8] (LuckyMinDurabilityRepair)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S6][S8] (LuckyMinDurabilityRepair)
    
    * Opções eliminadas em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (AutomaticLockSwitch,AutomaticLockTime)
    * Opções eliminadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (AutomaticLockSwitch,AutomaticLockTime)
    
    ATUALIZAÇÃO 26:
    * Corrigido o problema de bate-papo falso na Guilda. [TODAS AS VERSÕES]
    * Corrigido o problema que mostrava chats de outras guildas. [TODAS AS VERSÕES]
    * Arreglado o problema que mostrava diferentes bate-papos sindicais. [TODAS AS VERSÕES]
    * Arreglado a habilidade mestre. [S4]
    
    * Agregado os logs de itens em "GameServer\LOG\ITEM_LOG". [TODAS AS VERSÕES]
    * Agregado os logs de itens em "GameServerCS\LOG\ITEM_LOG". [TODAS AS VERSÕES]
    
    * Melhores funções nativas no servidor de jogos. [S4]
    
    * Reconstruído o sistema de Viewports de Guildas em União e Rivalidade. [TODAS AS VERSÕES]
    * Reconstruídas as funções do CannonTower. [TODAS AS VERSÕES]
    * Funções reconstruídas do Castle Siege. [TODAS AS VERSÕES]
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Command.dat". [TODAS AS VERSÕES] (CommandResetClearParty_ALX,CommandMasterResetClearParty_ALX)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Command.dat". [TODAS AS VERSÕES] (CommandResetClearParty_ALX,CommandMasterResetClearParty_ALX)
    
    Cliente:
    * Melhorias de segurança em MHPServer, MHPClient e MHPVerify.
    * Melhor desempenho no Main.dll
    
    ATUALIZAÇÃO 25:
    * Novo arquivo para configurar a caixa zen em "Data\Item\ItemMoneyDrop.txt". [TODAS AS VERSÕES]
    
    * Reconstruído o sistema Friends. [TODAS AS VERSÕES]
    * Reconstruído o sistema Guild, GuildClass, GuildManager, GuildAlliance e GuildRival. [TODAS AS VERSÕES]
    
    * Adicionado RewardMessage de CustomMonster. [TODAS AS VERSÕES]
    * Arreglado o Viewport do S8 em uma aliança de clãs. [TODAS AS VERSÕES]
    
    * Agregadas melhorias de segurança na conexão. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 24:
    * Protocolos agregados de conexões de Illusion Temple Renewals e Arca War. [TODAS AS VERSÕES]
    
    * Resolvido o problema da recompensa da Praça do Diabo. [TODAS AS VERSÕES]
    
    * Reestruturado o sistema de segurança anti DDOS. [TODAS AS VERSÕES]
    * Reestruturado o sistema de segurança anti DDOS entre o GameServer -> JoinServer. [TODAS AS VERSÕES]
    * Reestruturado o sistema de segurança anti DDOS entre o GameServer -> DataServer. [TODAS AS VERSÕES]
    
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (MaxPacketTime,MaxPacketCount)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [TODAS AS VERSÕES] (MaxPacketTime,MaxPacketCount)
    
    * Melhor segurança do cliente MHPServer.
    * Melhor segurança MHPServer Servidor.
    * Melhorado o sistema de EventItemBag. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 23:
    * Corrigido o problema de travamento ao tirar joias personalizadas. [S3][S3TAI]
    * Corrigido o problema que não foi exibido no ItemToolTip. [S0][S2][S2PHI][S3][S3TAI]
    * Arreglado EventEntryLevel de Kalima. [TODAS AS VERSÕES]
    * Arreglada la recompensa del Devil Square. [TODAS AS VERSÕES]
    * Arreglados selos sem tempo e coisas erradas em relação aos selos. [T6][T8]
    * Arreglado o Viewport para receber danos do Evil Spirit. [S0]
    * Arreglado os comandos por segundos. [TODAS AS VERSÕES]
    
    * Modificado o arquivo "Data\Event\EventEntryLevel.dat" modifica os níveis de qualidade. [TODAS AS VERSÕES]
    * O arquivo "Data\Skill\EffectList.txt" foi modificado para modificar alguns itens. [T6][T8]
    
    CLIENTE:
    * Resolva os problemas do CustomToolTip.
    * Melhorado o Servidor e Cliente MHP.
    * Melhorado o fluxo de dados na rede elétrica.
    * Arreglado problemas de joias personalizadas.
    * Arreglado problema de selos com duração.
    
    ATUALIZAÇÃO 22-1:
    * Resolvido o problema de bug com o warehouse. [TODAS AS VERSÕES]
    * Arreglado o problema de zen no comércio. [TODAS AS VERSÕES]
    * Resolvido o problema da Guild Alianza. [S0]
    * Arreglado o bug do dup no armazém. [TODAS AS VERSÕES]
    * Resolvido o problema de Archer e Spearman. [TODAS AS VERSÕES]
    
    * ItemLevel.txt agregado para diferenciar itens por nível em "Data\Item\ItemLevel.txt" [TODAS AS VERSÕES]
    * Suporte agregado de reconhecimento de itens por nível ao comando pick. [TODAS AS VERSÕES]
    * Suporte agregado de reconhecimento de itens por nível ao comando pickset. [TODAS AS VERSÕES]
    
    * Melhorou o resultado de dados entre o DataServer e o GameServer. [TODAS AS VERSÕES]
    
    * Mensagens modificadas no arquivo "Data\Message.txt" [TODAS AS VERSÕES] (656.664)
    
    ATUALIZAÇÃO 22:
    * Corrigindo problemas de Viewport em Blood Castle. [TODAS AS VERSÕES]
    * Arreglado a duplicação de itens ao morrer com a maquina caos. [TODAS AS VERSÕES]
    * Arreglado el trade hack al morir. [TODAS AS VERSÕES]
    * Corrigindo o problema das lojas com itens antigos. [TODAS AS VERSÕES]
    * Arreglado o empurrão de mobs. [T6][T8]
    * Arreglado o respawn de mobs no evento Acheron Guardian. [T8]
    
    * Evento Agregado Acheron Guardian. [T8]
    * Agregado todo o suporte de Acheron e Arca War. [T8]
    * Agregados as mensagens do Arca War em Message.txt. [T8]
    * Suporte agregado do NPC Lesnar para Arca War. [T8]
    * Agregados os buffs do Arca War. [T8]
    
    * Novas mensagens no arquivo "Data\Message.txt" [TODAS AS VERSÕES] (23~29,596,597,702~711)
    
    * GameMaster.txt modificado. [TODAS AS VERSÕES]
    
    * Reestruturadas em nível de código as funções do protocolo de Alianças e Hostilidades da Guilda. [TODAS AS VERSÕES]
    * Melhorado o carregamento de arquivos por MemScript. [TODAS AS VERSÕES]
    * Melhorado o sistema de Sign GM do CtrlCode no SQL Server. [TODAS AS VERSÕES]
    
    ATUALIZAÇÃO 21:
    * Novo arquivo para configurar o comando pick em "Data\Custom\CustomPick.txt". [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Script SQL agregado para o comando pick em "Databases\4 - (1.0.2.1) CustomPick.sql". [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Novos comandos adicionados em "Data\CommandManager.txt" (Pick,PickSet,PickClear,SetBuff) [S0][S2][S2PHI][S3][S3TAI][S6] (63,64,65,129)
    * Novas mensagens no arquivo "Data\Message.txt" [S0][S2][S2PHI][S3][S3TAI][S6] (50,395,450~458)
    
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (MonsterGetTopHitDamageUserMaxTime)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (MonsterGetTopHitDamageUserMaxTime)
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Custom.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (CustomPickSwitch,CustomPickMaxItemList,CustomPickMaxTime_ALX)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Custom.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (CustomPickSwitch,CustomPickMaxItemList,CustomPickMaxTime_ALX)
    * Novas opções adicionadas em "GameServer\DATA\GameServerInfo - Event.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (BloodCastleNPCWithoutEntrance,DevilSquareNPCWithoutEntrance,IllusionTempleNPCWithoutEntrance)
    * Novas opções adicionadas em "GameServerCS\DATA\GameServerInfo - Event.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (NPC do Castelo de Sangue sem entrada, NPC do Quadrado do Diabo sem entrada, NPC do Templo da Ilusão sem entrada)
    
    * Modificado o arquivo "ConnectServer\ServerList.dat". [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Corrigido o problema que mostrava horários incorretos nas entradas BC, CC, DS e IT. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Corrigido o problema do Dark Horse invisível no Blood Castle. [S2PHI]
    
    * Editor agregado SSeMU. [S0][S2][S2PHI][S3][S3TAI]
    * Opção agregada para mostrar no NPC os níveis necessários para ingressar em BC, DS e IT. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Agregado ao GetMainInfo remove barraSD, teclas de camara,traymode e monsterbar. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Agregado ao GetMainInfo o nível mínimo necessário para roubar uma pessoa. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Sistema de diálogo agregado para mostrar anúncios no jogo. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    ATUALIZAÇÃO 20-1:
    * Atualizada a interface dos executáveis. [S0][S2][S2PHI][S3][S3TAI][S6].
    * Arreglado a opção RandomOpt em Bags no Formato1. [S0][S2][S2PHI][S3][S3TAI][S6].
    * Arreglado a habilidade invisível depois do comércio. [S0][S2][S2PHI][S3][S3TAI]
    * Corrigido o problema de hack do pacote 0x0D.[S0][S2][S2PHI][S3][S3TAI][S6]
    * Configure a estrutura dos efeitos. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * MapManager agregado. S0][S2][S2PHI][S3][S3TAI][S6]
    * Agregado CustomItemBow, CustomItemGlove. [S6]
    
    * Modificado o arquivo "Data\Skill\EffectList.txt" modifica a estrutura do arquivo. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    ATUALIZAÇÃO 20:
    * Novo arquivo para configurar a barra de vídeo dos mobs em "Data\Custom\CustomHealthBar.txt" [S0][S2][S2PHI][S3][S3TAI][S6].
    * Novo arquivo para configurar os danos PvM e MvP em "Data\Util\DamageTable.txt" [S0][S2][S2PHI][S3][S3TAI][S6].
    * Novo arquivo para configurar ItemOptionRate por mapas em "Data\MapRateInfo.txt" [S0][S2][S2PHI][S3][S3TAI][S6].
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Character.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (XXReflectDamageRateToXX)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Character.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (XXReflectDamageRateToXX)
    
    * Nova opção adicionada em "GameServer\DATA\GameServerInfo - Common.dat". [S2][S2PHI][S3][S3TAI][S6] (ShieldGaugeDisable,ExperienceRandomAditional)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Common.dat". [S2][S2PHI][S3][S3TAI][S6] (ShieldGaugeDisable,ExperienceRandomAditional)
    
    * Nova opção adicionada em "GameServer\DATA\GameServerInfo - Command.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (CommandResetPointRateXX,CommandMasterResetPointRateXX)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Command.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (CommandResetPointRateXX,CommandMasterResetPointRateXX)
    
    * Novas opções adicionadas em "GameServer\DATA\GameServerInfo - Item.dat" para configurar as taxas de bebidas. [S0][S2][S2PHI][S3][S3TAI][S6] (AleIncSpeed,AleIncSpeedTime,OliveOfLoveIncSpeed,OliveOfLoveIncSpeedTime,RemedyOfLoveIncDamage,RemedyOfLoveIncDamageTime,PotionOfBlessConstA,PotionOfBlessConstB,PotionOfBlessTimeConstA,PotionOfSoulConstA,PotionOfSoulConstB,PotionOfSoulTimeConstA)
    * Novas opções adicionadas em "GameServerCS\DATA\GameServerInfo - Item.dat" para configurar taxas de bebidas. [S0][S2][S2PHI][S3][S3TAI][S6] (AleIncSpeed,AleIncSpeedTime,OliveOfLoveIncSpeed,OliveOfLoveIncSpeedTime,RemedyOfLoveIncDamage,RemedyOfLoveIncDamageTime,PotionOfBlessConstA,PotionOfBlessConstB,PotionOfBlessTimeConstA,PotionOfSoulConstA,PotionOfSoulConstB,PotionOfSoulTimeConstA)
    
    * Novas opções adicionadas em "GameServer\DATA\GameServerInfo - Skill.dat". [S2][S2PHI][S3][S3TAI][S6] (InfinityArrowSwitch_ALX)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Skill.dat". [S2][S2PHI][S3][S3TAI][S6] (InfinityArrowSwitch_ALX)
    
    * Corrija o problema do Dark Horse que não precisa de um alcance adicional para atacar. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Corrigido o problema do PK Assasing em pessoas que não foram apresentadas na atualização 1.0.1.9.
    * Corrigido o problema da porta irrompevel ​​do Blood Castle 1. [S0].
    * Corrigido o problema do chefe indestrutível com CustomMonsters no InvasionManager.[S0][S2][S2PHI][S3][S3TAI][S6]
    * Arreglado o problema de experiência 0 em versões com experiências ocasionais. [S0][S2][S2PHI][S3][S3TAI]
    * Arreglado o problema de que não andaban os rangos de niveles em itembagsex. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Corrigido o erro de leitura de InfinityArrowTimeConstA. [S2][S2PHI][S3][S3TAI][S6]
    * Arreglado o sinal e a seleção de caracteres dos personagens em "Data\Util\GameMaster.txt". S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Modificada a opção Invisibilidade de "Data\Util\GameMaster.txt" [S0][S2][S2PHI][S3][S3TAI][S6] (Invisibilidade ~ 0: Normal | 1: Invisível para todos os mobs | 2: Invisível para todos os jogadores e mobs)
    
    * Modificado o arquivo "Data\Item\SetItemOption.txt" modifica a estrutura do arquivo. [S0][S2][S2PHI][S3][S3TAI]
    * Modificado o arquivo "Data\Item\SetItemType.txt" modifica a estrutura do arquivo. [S0][S2][S2PHI][S3][S3TAI]
    * Modificado o arquivo "Data\Quest\QuestObjective.txt" modifica a estrutura do arquivo. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Modificado o arquivo "Data\QuestWorld\QuestWorldObjective.txt" modifica a estrutura do arquivo. [S6]
    * Modificado o arquivo "Data\QuestWorld\QuestWorldReward.txt" modifica a estrutura do arquivo. [S6]
    
    * Melhorado o rendimiento dos arquivos em execução. [S0][S2][S2PHI][S3][S3TAI][S6]
    * O Invasion Manager melhorou detectando o efeito em cada mapa dependendo do número de chefes. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Adicione o mapa onde está mato a cada chefe no Invasion Manager adicionando "%s" à mensagem de BossKilledMessage. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    ATUALIZAÇÃO 19:
    * Novo arquivo "Data\PKManager.txt" para configurar opções de PK. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Novo arquivo "Data\Item\WingOption.txt" para configurar opções de infelizmente. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Novas mensagens no arquivo "Data\Message.txt" [S0][S2][S2PHI][S3][S3TAI] (269, and 687 ~ 701)
    
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Custom.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (CustomAttackAutoPotionDelay)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Custom.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (CustomAttackAutoPotionDelay)
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Character.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (ComboDamageConstC) para calcular a% de dano do combo
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Character.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (ComboDamageConstC) para calcular a% de dano do combo
    
    * Opções eliminadas em "GameServer\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (PKDeathAnnounce,PKLimitBuyInShops,PKLimitEventEntry,PKLimitFree,PKLimitMove,PKLimitMoveSummon)
    * Opções eliminadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (PKDeathAnnounce,PKLimitBuyInShops,PKLimitEventEntry,PKLimitFree,PKLimitMove,PKLimitMoveSummon)
    
    * Modificado o arquivo "Data\CommandManager.txt" modifica a estrutura do arquivo. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Novos comandos agregados em "Data\CommandManager.txt" (Rename,DCFriend,BanChat,UnBanAcc,UnBanChar,UnBanChat,BCStart,DSStart,CCStart,ITStart) [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Corrigido o problema do anel Wizards Ring. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Arreglado o problema de múltiplas marcas registradas. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Arreglado o problema de empilhar itens e cair no inventário. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Resolvido o problema do Cavalo de DL. [S3][S3TAI]
    * Resolva problemas com as entradas CC. [S0]
    * Agrupa mensagens estranhas no GameServer executável do CastleSiege. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Agregado o tempo entre posições no CustomAttack. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Script SQL agregado para o comando rename em "Databases\1 - (1.0.1.9) WZ_RenameCharacter.sql". [S0][S2][S2PHI][S3][S3TAI][S6]
    * Script SQL agregado para o comando banacc em "Databases\2 - (1.0.1.9) WZ_BanAccount.sql". [S0][S2][S2PHI][S3][S3TAI][S6]
    * Script SQL agregado para o comando banchar em "Databases\3 - (1.0.1.9) WZ_BanCharacter.sql". [S0][S2][S2PHI][S3][S3TAI][S6]
    
    ATUALIZAÇÃO 18:
    
    * Corrigido o problema das joias na CustomStore. [S0][S2][S2PHI][S3][S3TAI]
    
    * Agregado o comando Pack(61) Unpack(62). "Dados\CommandManager.txt" [S0][S2][S3][S3TAI][S6]
    
    * Novas opções no arquivo "Data\Message.txt" [S0][S2][S2PHI][S3][S3TAI] (387 a 392)
    * Nova opção agregada em "Data\Util\GameMaster.txt" [S0][S2][S2PHI][S3][S3TAI][S6] (Invisibilidade ~ 0: Normal | 1: Invisível para todos os jogadores | 2: Invisível para todos os jogadores e mobs)
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Custom.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (CustomJewelPackSwitch,CustomJewelPackCommandJoBSyntax,CustomJewelPackCommandJoSSyntax,CustomJewelPackCommandJoLSyntax,CustomJewelPackCommandJoCSyntax,CustomJewelPackCommandJCRSyntax,CustomJewelPackCommandJoGSyntax,CustomJewelPackCommandJoHSyntax)
    * Novas opções adicionadas em "GameServerCS\DATA\GameServerInfo - Custom.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (CustomJewelPackSwitch,CustomJewelPackCommandJoBSyntax,CustomJewelPackCommandJoSSyntax,CustomJewelPackCommandJoLSyntax,CustomJewelPackCommandJoCSyntax,CustomJewelPackCommandJCRSyntax,CustomJewelPackCommandJoGSyntax,CustomJewelPackCommandJoHSyntax)
    * Nova opção adicionada em "GameServer\DATA\GameServerInfo - Skill.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (CastleSiegeSkillForAllMaps)
    * Nova opção adicionada em "GameServerCS\DATA\GameServerInfo - Skill.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (CastleSiegeSkillForAllMaps)
    
    * Suporte para usar habilidades de cerco de castelo em todos os mapas. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    ATUALIZAÇÃO 17-1:
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (DSJSMaxPacketTime,DSJSMaxPacketCount)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (DSJSMaxPacketTime,DSJSMaxPacketCount)
    
    * Arreglado o problema de comércio de dinheiro. [S0][S2]
    * Corrigido o problema em CustomNPCCollector e CustomNPCMove que não funcionava com CustomsNpcs. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Resolva o problema dos nomes incompletos nos requisitos da missão. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Corrigido o problema do tempo nas entradas do castelo de sangue 7. [S0][S2][S2PHI][S3]
    * Resolvido o problema da Alta Refinaria. [S3]
    
    * Remova a barra de saúde dos personagens. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    Servidor MHP:
    * Resolver o problema de desconexões.
    
    ATUALIZAÇÃO 17:
    * Novo arquivo "Data\PKItemDrop.txt" para configurar mas no fundo do PKItemDrop. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Common.dat". [S6] (HelperActiveMaxTime_ALX)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S6] (HelperActiveMaxTime_ALX)
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (VerifyTimeOutDisconnect,CheckHackSkillAction,CheckSpeedHackAction,CheckLatencyHackAction,CheckAutoPotionHackAction,CheckAutoComboHackAction,CheckMoveHackAction)
    * Novas opções adicionadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (VerifyTimeOutDisconnect,CheckHackSkillAction,CheckSpeedHackAction,CheckLatencyHackAction,CheckAutoPotionHackAction,CheckAutoComboHackAction,CheckMoveHackAction)
    -- 0: Não fazer nada | 1: Desconectar | 2: Bloquear IP, HardwareId e Fechar Cliente.
    
    * Modificado o arquivo "Data\Item\Item.txt" foi modificado Todos os sets lucky com suas variáveis ​​originais (Set 62 a Set 72). [S6]
    * Modificado o formato ItemIndex de CustomWing.txt para "00.000". [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Melhorado o rango MoneyDropRate do MapManager.txt. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Resolvido o problema da experiência masterlevel não mostrado. [S6]
    
    * Mensagem agregada para alcançar o limite máximo do SeniorMix. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Novos sistemas de segurança agregados em ConnectServer, MHPServer e GameServer. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Opções removidas de [GameServer\DATA\GameServerInfo - Common.dat] [S0][S2][S2PHI][S3][S3TAI][S6] (MainChecksum,PKItemDropMinPKLevel,PKItemDropRateOnMonsterKill_ALX,PKItemDropRateOnPlayerKill_ALX,PKItemDropItemMinLevel,PKItemDropItemMaxLevel,PKItemDropCanDropExc,PKItemDropCanDropSet,PKItemDropCanDropHarmony,PKItemDropCanDrop380,PKItemDropCanDropSocket)
    * Opções removidas de [GameServerCS\DATA\GameServerInfo - Common.dat] [S0][S2][S2PHI][S3][S3TAI][S6] (MainChecksum,PKItemDropMinPKLevel,PKItemDropRateOnMonsterKill_ALX,PKItemDropRateOnPlayerKill_ALX,PKItemDropItemMinLevel,PKItemDropItemMaxLevel,PKItemDropCanDropExc,PKItemDropCanDropSet,PKItemDropCanDropHarmony,PKItemDropCanDrop380,PKItemDropCanDropSocket)
    
    Conectar Servidor:
    * Novas opções agregadas em "ConnectServer\ConnectServer.ini". [S0][S2][S2PHI][S3][S3TAI][S6] (TimeoutDisconnect,VerifyTimeoutDisconnect)
    
    Servidor MHP:
    * Novas opções agregadas em "MHPServer\MHPServer.ini". [S0][S2][S2PHI][S3][S3TAI][S6] (TimeoutDisconnect,VerifyTimeoutDisconnect)
    
    Clientes:
    * Arreglado o problema crasheo no cliente ao mover um item para a máquina caos. [S0][S2][S2PHI][S3][S3TAI]
    * Agregado o TrayMode Tecla F12. [S2][S2PHI][S3][S3TAI][S6]
    * Agregado as opções de mudança de fonte no cliente. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    ATUALIZAÇÃO 16-1:
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (ServerDebugger)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S0][S2][S2PHI][S3][S3TAI][S6] (ServerDebugger)
    
    * Agregado suporte para Temporada 2, Episódio 1 Philipine. [S2PHI]
    * Debug de console agregado para SkillHack, MoveHack, itens inválidos e monstros inválidos. [BETA] [S0][S2][S2PHI][S3][S3TAI][S6]
    * Agregado mostra a experiência sempre abaixo do nível. [S0][S2][S2PHI][S3][S3TAI][S6]
    
    * Corrija o problema dos itens 380 que não foram aplicados ao dano. [S2][S3][S3TAI][S6]
    * Corrigido o problema do viewport em s2 para receber veneno. [S2]
    
    Cliente:
    * Agregado Right Clic Ítem Move en Main. [S0][S2][S3][S3TAI]
    
    * Resolvido o problema das joias Lower Refining Stone e Higher Refining Stone. [S2][S3][S3TAI]
    * Arreglado o problema da Jóia da Criação que tildaba o cliente. [S0]
    * Arreglado o problema da porta do Castle Siegue. [S6]
    * Corrigido o problema do Death Stab que não mostrava o efeito. [S0]
    
    ATUALIZAÇÃO 16:
    * Corrigido o problema de PKItemDrop que em algumas ocasiões dropa item com probabilidade 0. [S0][S2][S3][S3TAI][S6]
    * Corrigindo a falha do GMPost ao usar %s
    * Arreglado el CashShop não restaba pontos al comprar.[S3TAI]
    * Corrija o problema de que as entradas para eventos com durabilidade não sejam limitadas (BC, CC, DS e IT)
    * Arreglado o problema do cerco do castelo de procedimentos errados.
    * Corrigido o problema de datas incorretas em MUCASTLE_DATA. [S0][S2][S3][S3TAI][S6]
    * Corrigido o problema do CustomMonster no NPC com barra de vida. [S0][S2][S3][S3TAI][S6]
    
    * Suporte agregado para CustomJewel em "Data\Custom\CustomJewel.txt" [S0][S2][S3][S3TAI]
    * Agregado a opção gate em "Data\Custom\CustomMove.txt" [S0][S2][S3][S3TAI][S6]
    * Agregado a opção gate em "Data\Custom\CustomNPCMove.txt" [S0][S2][S3][S3TAI][S6]
    * Agregada a recompensa da arena personalizada em "Data\EventItemBag\Custom Arena.txt". [S0][S2]
    * Agregado o comando MakeSet(120). "Dados\CommandManager.txt" [S0][S2][S3][S3TAI][S6]
    * Suporte agregado para recarga automática de flechas durante o ataque e fora do ataque. [S0][S2][S2PHI][S3][S3TAI][S6]
    * Nova opção agregada para não disparar flechas. [S0]
    
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Skill.dat". [S0] (InfinityArrowSwitch_ALX)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Skill.dat". [S0](InfinityArrowSwitch_ALX)
    
    * Modificado o arquivo "Data\Custom\CustomJewel.txt" modifica opções para cada versão. [S0][S2][S3][S3TAI][S6]
    * O arquivo "Data\Event\InvasionManager.dat" foi modificado e borrou a invasão 5 correspondente a um mob inválido. [S3TAI]
    * O arquivo "Data\Monster\MonsterList.txt" foi modificado e borrou o mobs 413 não correspondente a esta versão. [S3TAI]
    * Modificado o arquivo "Data\EventItemBagManager.txt" para suportar a recompensa CustomArena. [S0][S2]
    * Modificado o arquivo "GameServer\DATA\GameServerInfo - Character.dat" adicionado à linha "CustomArenaDamageRate". [S0][S2]
    
    Cliente:
    * Suporte agregado para Custom Jewel en Main. [S0][S2][S3][S3TAI]
    * Agregado suporte para Custom Tool Tip en Main. [S0][S2][S3][S3TAI]
    * Suporte agregado para ItemStack e ItemValue em Main. [S0][S2][S3][S3TAI][S6]
    * Agregado AttackAnimationValue em GetMainInfo. [S0][S2][S3][S3TAI][S6]
    * Agregado suporte multilíngue em CustomMessage de GetMainInfo. [S0][S2][S3][S3TAI]
    
    ATUALIZAÇÃO 15:
    * Corrigido a falha ou interface invisível em resoluções HD em Kanturu. [S2][S3][S3TAI]
    * Arreglado o CustomMap em main.dll. [S6]
    * Arreglado o contador do gameserver no ConnectServer ao recarregar. [S0][S2][S3][S3TAI][S6]
    
    ATUALIZAÇÃO 14-1:
    * Agregados os registros ao comprar no CashShop. [S3TAI]
    * Agregado o comando "!" para gamemasters. [S0][S2][S3][S3TAI][S6]
    
    * Configure a criação de Mobs do InvasionManager no SafeZone. [S0][S2][S3][S3TAI][S6]
    * Arreglado a habilidade invisível. [S0][S2][S3][S3TAI][S6]
    * Arreglado o erro de duplicação por maquina caos. [S0][S2][S3][S3TAI][S6]
    * Arreglar os danos errados em geral. [S0][S2][S3][S3TAI]
    
    * Melhorado a habilidade invisível em GameMasters. [S0][S2][S3][S3TAI][S6]
    
    * Agregada a redução do consumo de CPU principal. [S0][S2][S3][S3TAI]
    * Sistema agregado de Minimapa principal. [S0][S2][S3][S3TAI]
    
    ATUALIZAÇÃO 14:
    * Novas opções agregadas em "GameServer\DATA\GameServerInfo - Common.dat". [S0][S2][S3][S3TAI][S6] (ExperienceMultiplierConstA,ExperienceMultiplierConstB,MaxLevel,DuelMaxTime)
    * Novas opções agregadas em "GameServerCS\DATA\GameServerInfo - Common.dat". [S0][S2][S3][S3TAI][S6] (ExperienceMultiplierConstA,ExperienceMultiplierConstB,MaxLevel,DuelMaxTime)
    
    * Novo arquivo "Data\Custom\CustomArena.txt". [S0]
    * Novo arquivo "Data\Terrain\Terrain41.att" [S0][S2]
    
    * Modificado o arquivo "Data\MapManager.txt". [S0][S2] (Agregados do mapa índice 40)
    
    * Modificado o arquivo "Data\Event\EventEntryLevel.dat". [S0][S2][S3][S3TAI][S6] (Cambiado o MaxLevel 400 por *)
    * Modificado o arquivo "Data\Move\Gate.txt". [S0][S2][S3][S3TAI][S6] (Cambiado o MaxLevel 400 por *)
    * Modificado o arquivo "Data\Move\Move.txt". [S0][S2][S3][S3TAI][S6] (Cambiado o MaxLevel 400 por *)
    * Modificado o arquivo "Data\Move\MoveSummon.txt". [S0][S2][S3][S3TAI][S6] (Cambiado o MaxLevel 400 por *)
    * Modificado o arquivo "Data\Quest\Quest.txt". [S0][S2][S3][S3TAI][S6] (Cambiado o MaxLevel 400 por *)
    * Modificado o arquivo "Data\QuestWorld\QuestWorld.txt". [S6] (Cambiado o MaxLevel 400 para *)
    
    * Agregado o mapa 40 a principal. [S0][S2]
    * Sistema agregado de reconexão principal. [S0][S2]
    
    * Arreglado Ctrl Fix em Main. [S0]
    * Arreglada la Jóia da Elevação. [S6]
    * Arreglado el Party Bug al morir. [S0][S2][S3][S3TAI][S6]
    * Arreglado o problema de reparar itens com comércio. [S0][S2][S3][S3TAI][S6]
    * Arreglado o problema de zen no comércio. [S0][S2][S3][S3TAI][S6]
    * Arreglado o CustomMove, CustomNPCMove e outros movimentos na zona segura. [S0][S2][S3][S3TAI][S6]
    
    ATUALIZAÇÃO 13:
    * Corrigido o problema ao coronar Castle Siege. [S0][S2]
    * Corrigido o erro WZ_CW_InfoLoad e WZ_CW_SaveLoad. [S2]
    * Arreglado o sistema de terrenos. [S0][S2][S3][S3TAI][S6]
    * Arreglado a desconexão do MG com Evil Spirit. [S3 TAI]
    * Corrigido o problema do dragão direito usando downgrade de interface em Kanturu Event, Crywolf e Castle Siege. [S6]
    * Arreglado o problema que não se mostrava o preço nas moedas das lojas. [S3][S3TAI]
    
    * Agregado o menu de desconexão e banimento de contas e personagens no servidor de jogos. [S0][S2][S3][S3TAI][S6]
    
    * Eliminados todos os terrenos, sincronizados com os novos. [SE DEBE ELIMINAR TERRENOS ANTERIORES] [S0][S2][S3][S3TAI][S6]
    * Eliminado o sistema de inicialização do ConnectServer. [S0][S2][S3][S3TAI][S6]
    
    * Modificado o arquivo "Data\Hack\HackPacketCheck.txt". [S3TAI]
    * Modificado o arquivo "Data\Item\Item.txt". [S3TAI]
    * Modificado o arquivo "Data\Event\CastleSiege.dat" com seus valores reais. [S0][S2][S3][S3TAI]
    
    ATUALIZAÇÃO 12:
    * Implementado o sistema de reconexão.[S3][S3TAI]
    * Implementadas opções para forçar o início da invasão. [S0][S2][S3][S3TAI][S6]
    
    * Novo arquivo "Data\EventItemBag\Chaos Card Mix 1.txt" [S3TAI]
    * Novo arquivo "Data\CashShop.txt" [S3TAI]
    
    * Nova opção agregada em "GameServer\DATA\GameServerInfo - Common.dat". [S2][S3][S3TAI] (SetItemAcceptHarmonySwitch,AutomaticLockSwitch)
    * Nova opção agregada em "GameServerCS\DATA\GameServerInfo - Common.dat". [S2][S3][S3TAI] (SetItemAcceptHarmonySwitch,AutomaticLockSwitch)
    * Modificado o arquivo com itens novos "Data\Item\Item.txt" [S3TAI]
    * Novas opções no arquivo "ConnectServer\ConnectServer.ini" [S0][S2][S3][S3TAI][S6]
    
    * Arreglado a possibilidade de sacar o Harmony em itens antigos do NPC. [S2][S3][S3TAI]
    * Corrigido o problema do Selo de Movimento que você não pode deixar de jogar gratuitamente. [S3TAI][S6]
    * Corrigido o problema do MISS no PVP. [S0]
    * Corrigido o problema da barra de saúde que mostrava as armadilhas invisíveis. [S0][S2][S3][S3TAI][S6]
    * Corrigido o problema do GateKeeper.[S6]
    * Resolvido o problema da aliança desconectada. [S2]
    * Mensagens erradas enviadas para Guild Alianza e Hostilidade. [S0][S2][S3][S3TAI][S6]
    * Corrigido o erro do menu escape con trade. [S2][S3][S3TAI]
    
    * Melhorado o bloqueio automático em ConnectServer, MHPServer e GameServers. [S0][S2][S3][S3TAI][S6]
    * Melhorado o sistema de WindowMode incluindo minimizador (Tecla F12). [S0]
    * Melhorado o sistema de efeitos. [S0][S2][S3][S3TAI]
    * Melhorado o ativador/desativador do MonsterBar (Tecla F8). [S0][S2][S3][S3TAI][S6]
    
    ATUALIZAÇÃO 11:
    * Novas opções no arquivo "Data\CommandManager.txt" [S0][S2][S3][S6]
    * Novas opções no arquivo "Data\Message.txt" [S0][S2][S3][S6]
    * Novas opções no arquivo "GameServer\DATA\GameServerInfo - Common.dat" [S0][S2][S3][S6]
    * Novas opções no arquivo "GameServerCS\DATA\GameServerInfo - Common.dat" [S0][S2][S3][S6]
    
    * Novos comandos agregados /banacc e /banchar. [S0][S2][S3][S6]
    * Novos comandos agregados /buyvip configuração em "Data\Custom\CustomBuyVip.txt". [S0][S2][S3][S6]
    
    * Sistema agregado para desabilitar itens caídos em busca de festa e conteúdo de monstros. [S0][S2][S3][S6]
    * Sistema agregado ItemLoot para evitar que outros personagens incluam itens de outros personagens. Configuração em "Data\Item\ItemLoot.txt" [S0][S2][S3][S6]
    
    * Arreglado o sistema de gerenciador de bônus em OnlineReward.txt. [S0][S2][S3][S6]
    * Resolveu o problema da festa com um único membro no PartyReconnect 0. [S0][S2][S3][S6]
    * Corrija o problema dos itens que podem ser agarrados por qualquer personagem. [S0][S2][S3][S6]
    
    ATUALIZAÇÃO 10:
    * Novo arquivo agregado em "Data\Util\OnlineReward.txt" [S3][S6]
    * Agregada a possibilidade de respawnar onde for morto ou reloguear do MapManager.
    * Opções agregadas do comando /make 380 e JoH
    * Resolvido o problema do gerenciador de invasão que não reaparece.
    * Arreglado o problema dos itens SET nas lojas.
    * Resolvido o problema de Kanturu Hands.
    * Arreglado o problema da vida das multidões, portas e estátuas no cerco do castelo.
    
    ATUALIZAÇÃO 9:
    * Arreglado o problema da opção de matar entre membros da mesma festa.
    * Corrigido o problema ao desligar o cashshop que não funcionava nas lojas de moedas.
    
    * Novas opções no arquivo "Data\MapManager.txt" [S0][S2][S3][S6]
    
    * Agregado a barra de saúde no principal s0.
    * Agregados os pontos em tempo real em s2.
    
    ATUALIZAÇÃO 8:
    * Novo formato no arquivo "Data\Item\ExcellentOptionRate.txt" [S0][S3][S6]
    * Novo formato no arquivo "Data\Item\ItemOption.txt" [S0][S3][S6]
    
    * Problemas variados em MAIN [S3][S6]
    
    ATUALIZAÇÃO 7:
    * Novas opções no arquivo "GameServer\DATA\GameServerInfo - Common.dat" [S3][S6]
    * Novas opções no arquivo "GameServerCS\DATA\GameServerInfo - Common.dat" [S3][S6]
    
    * Agregado o Golden Archer em "Data\Monster\Spawn\002 - Devias.txt" [S3]
    * Agregado o Golden Archer em "Data\Monster\Spawn\003 - Noria.txt" [S3]
    * Agregado o empurrão no combo para matar o oponente. [S3][S6]
    * Agregado o empuje no combo para matar os mobs. [S3][S6]
    * Agregada a opção PKItemDrop de itens 380. [S3][S6]
    
    * Configure as opções CommandMasterResetKeepX [S3][S6]
    * Corrigido o problema de CustomGift em DataServer e GameServer. [S3][S6]
    * Arreglado o problema de mensagens confusas nas caixas suspensas. [S3]
    * Arreglado a mensagem errada no castelo cerco. [S3][S6]
    * Arreglado o nível mestre do cavalo negro que não aplicava defesa. [S6]
    * Arreglado a queda de itens em duelo. [S3]
    
    * Arreglos em "Data\Character\DefaultClassFreebies.txt" [S3]
    * Arreglos em "Data\Custom\CustomJewel.txt" [S3]
    * Arreglos em "Data\EventItemBag\Game Master Box.txt" [S3]
    * Arreglos em "Data\EventItemBag\Silver Medal.txt" [S3]
    * Arreglos em "Data\EventItemBag\Gold Medal.txt" [S3]
    * Arreglos em "Data\EventItemBag\Leo the Helper.txt" [S3]
    
    * Nova tabela agregada na base de dados (EventGoldenArcher,GiftData). [S3][S6]
    * Procedimentos modificados na base de dados (WZ_DeleteCharacter,WZ_RenameCharacter). [S3][S6]
    * Eliminada a tabela (GiftSystem). [S3][S6]
    
    * Mudança de cor na UI dos aplicativos.
    
    ATUALIZAÇÃO 6:
    * Agregado o NPC Mirage em "Data\Monster\Spawn\000 - Lorencia.txt" [S3]
    * Arreglado o sistema de habilidade do Illusion Temple. [S3][S6]
    * Arreglado Skill Nova [S3]
    * Arreglado problemas de texturas. [S3]
    * Arreglado itens brilhantes e raros. [S3]
    
    * Removido CustomJewel. [S3]
    
    ATUALIZAÇÃO 5:
    * Sistema agregado de ConnectMember em "Data\ConnectMember.txt" [S3][S6]
    * Sistema agregado de ComboSkill em "Data\Skill\ComboSkill.txt" [S3][S6]
    * Suporte agregado ao ConnectServer para fazer atualização automática. [S3][S6]
    
    * Novas opções no arquivo "GameServer\DATA\GameServerInfo - Character.dat" [S3][S6]
    * Novas opções no arquivo "GameServerCS\DATA\GameServerInfo - Character.dat" [S3][S6]
    * Novas opções no arquivo "GameServer\DATA\GameServerInfo - Common.dat" [S3][S6]
    * Novas opções no arquivo "GameServerCS\DATA\GameServerInfo - Common.dat" [S3][S6]
    
    * Arreglado o problema de conteúdo do item no QuestWorld. [S6]
    
    ATUALIZAÇÃO 4:
    * Sistema agregado de uso de habilidades na zona segura "Data\Skill\SkillUseArea.txt"
    * Sistema Monster Move agregado em "Data\Monster\MonsterMove.txt"
    * Agregados os novos sistemas de recompensa ao QuestWorld.
    
    * Sincronizados os terrenos com os terrenos do cliente.
    
    * Corrigido o problema do comando /edit
    * Arreglado a queda da estátua no castelo de sangue.
    * Conclua as missões do Mercador Errante Zyro.
    * Arreglado o sistema de Quest filtrado por mapnumber.
    * Arreglado o sistema de QuestWorld filtrado por mapnumber.
    
    * Removidos os bots (buffer e trader)
    * Removido o sistema "Data\Monster\MarlonSpawn.txt"
    
    ATUALIZAÇÃO 3:
    * Agregado o sistema de bloqueio automático.
    
    * Corrigido o problema de desconexão ao fazer Reload Common.
    * Corrija o problema de mobs criados em zonas seguras.
    * Corrigido o problema dos PCPoints/Coins por tempo.
    
    * Novas opções no arquivo "GameServer\DATA\GameServerInfo - Event.dat"
    * Novas opções no arquivo "GameServer\DATA\GameServerInfo - Common.dat"
    
    * Modificado o comando makemob Modo1: /makemob <mob> Modo2: /makemob <-mob> <map> <y> <x>
    
    * Melhorado o comando /setcoin
    * Melhorado o comando /edit
    
    ATUALIZAÇÃO 2:
    * Agregado a opção de recuperação de vida do Kundum ao cair Crywolf.
    * Agregado o sistema de venda em lojas por moedas.
    
    * Agregado o arquivo "Data\Custom\CustomMasterResetReward.txt"
    
    * Corrigido o problema do SeniorMix na Season3.
    * Corrigido o problema de carregamento de terrenos inválidos.
    * Corrigido o problema de carregamento de mobs em mapas inválidos.
    * Arreglado o problema de múltiplas lojas com diferentes arquivos.
    * Corrigido o problema do ajudante de reparo automático.
    * Corrigir o problema do ajudante da cura constante.
    
    * Eliminado o arquivo "Data\Custom\CustomRespawn.txt"
    * Eliminado o arquivo "Data\Custom\CustomSpawn.txt"
    
    * Novas opções no arquivo "Data\MapManager.txt"
    * Novas mensagens no arquivo "Data\Message.txt"
    * Novas opções no arquivo "Data\ShopManager.txt"
    * Novas opções no arquivo "GameServer\DATA\GameServerInfo - Event.dat"
    * Novas opções no arquivo "GameServer\DATA\GameServerInfo - Common.dat"
    
    * Removido o GameServerCS.
    * Removidas coisas desnecessárias de "ConnectServer\ServerList.dat"
    * Removidas coisas desnecessárias de "Data\MapServerInfo.txt"
