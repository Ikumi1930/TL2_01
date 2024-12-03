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
		/// WIC��DDS�ɕϊ�����֐�
		void ConvertTextureWICToDDS(const std::string & filePath);

private:
		///<summary>
		///�e�N�X�`���t�@�C���̓ǂݍ���
		///</summary>
		///<param name="filePath">�t�@�C���p�X</param>
		void LoadWICTextureFromFile(const std::string& filePath);

		///<summary>
		///�}���`�o�C�g���������C�h�����ɕϊ�����
		///</summary>
		///<param name="filePath">�}���`�o�C�g������</param>
		static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

};