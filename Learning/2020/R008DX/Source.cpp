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
	int i, j;
	//���C�����[�v
	while (LoopProcess()) {
		DrawFormatString(0, 0, GetColor(255, 255, 255), "���");
		for (i = 1; i <= 9; i++) {

			for (j = 1; j <= 9; j++) {
				DrawFormatString(i * 30, j * 30, 0xffffff, "%d", i*j);
			}
				
		}
	}

	DxLib_End();//�I������
	return 0;
}