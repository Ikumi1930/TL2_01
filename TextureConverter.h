#pragma once
#include <string>

//テクスチャコンバーター
class TextureConverter
{
public:
		///<summary>
		///テクスチャをWICからDDSに変換する
		///</summary>
		///<param name="filePath">ファイルパス</param>
		void ConvertTextureWICToDDS(const std::string & filePath);

private:

		//テクスチャファイル読み込み
		void LoadWICTextureFromFile(const std::string& filePath);

		//マルチバイト文字列をワイド文字列に変換
		static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

};