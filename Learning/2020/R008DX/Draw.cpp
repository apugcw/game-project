//�R�s�y�����v���O����
#include "DxLib.h"

int LoopProcess() {
	ScreenFlip();
	if (ProcessMessage() != 0) { return 0; }
	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { return 0; }
	ClearDrawScreen();
	return 1;
}
int AllInit() {
	ChangeWindowMode(TRUE); //�E�B���h�E�\��
	SetMainWindowText("GameCreativeWorks"); //�E�B���h�E�^�C�g��
	SetGraphMode(800, 600, 16); //�E�B���h�E�T�C�Y
	SetFontSize(20); //���p�t�H���g�T�C�Y
	if (DxLib_Init() < 0) { return -1; }
	SetDrawScreen(DX_SCREEN_BACK); //�`��Ώ�
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	if (AllInit() == -1) { return -1; }//DxLib�������֘A

	//�������֘A

	//���C�����[�v
	while (LoopProcess()) {
		DrawCircle(100, 100, 30, GetColor(255, 0, 0), 0);
		DrawCircle(300, 100, 30, GetColor(0, 255, 0), 1);
		DrawBox(50, 300, 100, 400, GetColor(0, 0, 255), 1);
		DrawLine(200, 300, 300, 400, GetColor(255, 255, 255), 1);
	}

	DxLib_End();//�I������
	return 0;
}