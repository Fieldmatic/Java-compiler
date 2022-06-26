
@oduzmi_body:
@oduzmi_body:
		MOV 	8(%14),8(%14)
		MOV 	8(%14),b
dodaj:
		PUSH	%14
		MOV 	%15,%14
@dodaj_body:
oduzmi:
		PUSH	%14
		MOV 	%15,%14
@oduzmi_body:
funkcija:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$8,%15
@funkcija_body:
		MOV 	$5,8(%14)
		MOV 	$5,%13
		JMP 	@funkcija_exit
testic:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@testic_body:
		MOV 	$5,-12(%14)
		MOV 	-12(%14),%13
		JMP 	@testic_exit
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$12,%15
@main_body:
		MOV 	$5,-4(%14)
		MOV 	$3,-8(%14)
		MOV 	$5,-12(%14)