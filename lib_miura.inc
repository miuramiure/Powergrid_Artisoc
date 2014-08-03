Function distance_agt(agt1 as Agt, agt2 as Agt) as Double{
//���ĤΥ���������Ȥδ֤ε�Υ���������ؿ�

//���֤���������agt1�ζ��֤�������Ƶ�Υ�׻��˻Ȥ���
Dim sp as Space
Dim agt_type as AgtType
agt_type=SpecifyAgtType(agt1)
sp=GetRideSpace(agt_type)

//��Υ��׻�����
dim distance as Double
distance=MeasureDistance(agt1.X, agt1.Y, agt2.X, agt2.Y, sp)

return(distance)

}

//----------------------------------------------------------
Function direction_agt(agt1 as Agt, agt2 as Agt) as Double{
//agt1���鸫��agt2�γ��٤��������ؿ�

//���֤���������agt1�ζ��֤�������Ƴ��ٷ׻��˻Ȥ���
Dim sp as Space
Dim agt_type as AgtType
agt_type=SpecifyAgtType(agt1)
sp=GetRideSpace(agt_type)

//���٤�׻�����
dim direction as Double
direction=GetDirection(agt1.X, agt1.Y, agt2.X, agt2.Y, sp)

return(direction)

}

//----------------------------------------------------------
Function AgtTypeComp(agt1 as Agt, agt2 as Agt) as Integer{
//agt1��agt2�Υ����פ����פ���Ȥ�1�����פ��ʤ��Ȥ�0����Ϥ���

Dim agt_type1 as String
Dim agt_type2 as String
Dim answer as Integer

//���줾��Υ���������ȥ����פ�ʸ����Ȥ��Ƽ�������
agt_type1=CStr(SpecifyAgtType(agt1))
agt_type2=CStr(SpecifyAgtType(agt2))

//ʸ���󤬰��פ��Ƥ����1�����פ��Ƥ��ʤ����0����Ϥ���
If StrComp(agt_type1,agt_type2)==0 then
	answer=1
Else

	answer=0

End if

return(answer)

}

//----------------------------------------------------------
Function AgtTypeComp2(agt1 as Agt, agt_type_str as String) as Integer{
//agt1�Υ�����̾��agt_type_str�Ȱ��פ���Ȥ�1�����פ��ʤ��Ȥ�0����Ϥ���
//agt_type_str��"Universe.����̾.����̾"�Ȥ������ǵ��Ҥ���

Dim agt_type as String
Dim answer as Integer

//���줾��Υ���������ȥ����פ�ʸ����Ȥ��Ƽ�������
agt_type=CStr(SpecifyAgtType(agt1))

//ʸ���󤬰��פ��Ƥ����1�����פ��Ƥ��ʤ����0����Ϥ���
If StrComp(agt_type,agt_type_str)==0 then
	answer=1
Else

	answer=0

End if

return(answer)

}