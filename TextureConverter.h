#pragma once
#include <string>

//�e�N�X�`���R���o�[�^�[
class TextureConverter
{
public:
		///<summary>
		///�e�N�X�`����WIC����DDS�ɕϊ�����
		///</summary>
		///<param name="filePath">�t�@�C���p�X</param>
		void ConvertTextureWICToDDS(const std::string & filePath);

private:

		//�e�N�X�`���t�@�C���ǂݍ���
		void LoadWICTextureFromFile(const std::string& filePath);

		//�}���`�o�C�g����������C�h������ɕϊ�
		static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

};