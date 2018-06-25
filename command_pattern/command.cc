#include"command.h"

CMuttonCommand::CMuttonCommand(CBaker* baker)
	: m_iBaker(baker)
{

}

void CMuttonCommand::Excute()
{
	m_iBaker->BakeMutton();
}

CWingCommand::CWingCommand(CBaker* baker)
	: m_iBaker(baker)
{

}
void CWingCommand::Excute()
{
	m_iBaker->BakeWing();
}
