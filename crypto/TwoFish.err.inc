{******************************************************************************}
{*  TwoFish.err.inc                                                           *}
{*  Revolutionary Confederation of Anarcho Syndicalists                       *}
{*  Written by: black.rabbit 2011                                             *}
{******************************************************************************}
resourcestring
    ERR_TWOFISH_INCORRECT_KEY   = '������������ ���� "%s"!';
    ERR_TWOFISH_INCORRECT_BLOCK = '������������ ���� "%s"!';
    ERR_TWOFISH_INCORRECT_IV    = '������������ ������ ������������� "%s"!';
{$IFDEF ECB}
    ERR_TWOFISH_ECB_ENCRYPT     = '������ ������������� TwoFish::%d %s � ������ ����������� ������� �����'#13#10'������ ���������� ������';
    ERR_TWOFISH_ECB_DECRYPT     = '������ ������������� TwoFish::%d %s � ������ ����������� ������� �����'#13#10'������ ���������� ������';
{$ENDIF ECB}
{$IFDEF CBC}
    ERR_TWOFISH_CBC_ENCRYPT     = '������ ������������� TwoFish::%d %s � ������ ��������� ������ �� �����������'#13#10'������ ���������� ������';
    ERR_TWOFISH_CBC_DECRYPT     = '������ ������������� TwoFish::%d %s � ������ ��������� ������ �� �����������'#13#10'������ ���������� ������';
{$ENDIF CBC}
{$IFDEF CFB}
    ERR_TWOFISH_CFB_ENCRYPT     = '������ ������������� TwoFish::%d %s � ������ �������� ����� �� �����������'#13#10'������ ���������� ������';
    ERR_TWOFISH_CFB_DECRYPT     = '������ ������������� TwoFish::%d %s � ������ �������� ����� �� �����������'#13#10'������ ���������� ������';
{$ENDIF CFB}
{$IFDEF OFB}
    ERR_TWOFISH_OFB_ENCRYPT     = '������ ������������� TwoFish::%d %s � ������ �������� �������� �������� ������'#13#10'������ ���������� ������';
    ERR_TWOFISH_OFB_DECRYPT     = '������ ������������� TwoFish::%d %s � ������ �������� �������� �������� ������'#13#10'������ ���������� ������';
{$ENDIF OFB}
