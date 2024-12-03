#include <cstdio>
#include <cstdlib>
#include "TextureConverter.h"
#include "Windows.h"
#include <cassert>

//�R�}���h���C������
enum Argument {
	kApplicationPath,	//�A�v���P�[�V�����̃p�X
	kFilePath,			//�n���ꂽ�t�@�C���̃p�X

	NumArgument			
};

int main(int argc, char* argv[])
{
	assert(argc <= NumArgument);//argc�̐���NumArgment��蓯���ȉ��ł��邱�Ƃ��m�F

	//COM���C�u�����̏�����
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//�e�N�X�`���R���o�[�^�[
	TextureConverter converter;

	//�e�N�X�`���ϊ�
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	//COM���C�u�����̏I��
	CoUninitialize();

	system("pause");

	return 0;
}