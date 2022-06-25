
@dodaj_exit:
		MOV 	%14,%15
		POP 	%14
		RET
@oduzmi_exit:
		MOV 	%14,%15
		POP 	%14
		RET
@oduzmi_body:
@oduzmi_body:
funkcija:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@funkcija_body:
		MOV 	$5,-12(%14)
		MOV 	$5,%13
		JMP 	@funkcija_exit
@funkcija_exit:
		MOV 	%14,%15
		POP 	%14
		RET
testic:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@testic_body:
		MOV 	$5,-12(%14)
		MOV 	-12(%14),%13
		JMP 	@testic_exit
@testic_exit:
		MOV 	%14,%15
		POP 	%14
		RET
funkcija:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@funkcija_body:
		MOV 	$0,-8(%14)
		MOV 	$5,%13
		JMP 	@funkcija_exit
@funkcija_exit:
		MOV 	%14,%15
		POP 	%14
		RET
testic:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@testic_body:
		MOV 	$0,-8(%14)
		MOV 	$5,%13
		JMP 	@testic_exit
@testic_exit:
		MOV 	%14,%15
		POP 	%14
		RET
@dodaj_exit:
		MOV 	%14,%15
		POP 	%14
		RET
@oduzmi_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@main_body:
		MOV 	8(%14),-4(%14)
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET