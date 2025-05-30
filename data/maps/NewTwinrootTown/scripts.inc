NewTwinrootTown_MapScripts::
	.byte 0
	
NewTwinrootTown_EventScript_PlayersHouseSign::
	msgbox NewTwinrootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return
	
NewTwinrootTown_EventScript_RivalsHouseSign::
	msgbox NewTwinrootTown_Text_RivalsHouse, MSGBOX_DEFAULT
	return
	
NewTwinrootTown_Text_PlayersHouse:
	.string "{PLAYER}'s house$"
	
NewTwinrootTown_Text_RivalsHouse:
	.string "James' house$"