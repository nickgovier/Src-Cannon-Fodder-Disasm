struct struct_Voc {
	uint8 field_0;
	uint8 field_1;
	const char mFilename[10];
};

const struct_Voc mVocTable[] = {
  { 0x09, 0x02, "ALL02.VOC" },
  { 0x09, 0x03, "ALL03.VOC" },
  { 0x09, 0x04, "ALL04.VOC" },
  { 0x09, 0x05, "ALL05.VOC" },
  { 0x09, 0x06, "ALL06.VOC" },
  { 0x09, 0x07, "ALL07.VOC" },
  { 0x09, 0x08, "ALL08.VOC" },
  { 0x09, 0x09, "ALL09.VOC" },
  { 0x09, 0x0B, "ALL11.VOC" },
  { 0x09, 0x0C, "ALL12.VOC" },
  { 0x09, 0x0D, "ALL13.VOC" },
  { 0x09, 0x0F, "ALL15.VOC" },
  { 0x09, 0x10, "ALL16.VOC" },
  { 0x09, 0x11, "ALL17.VOC" },
  { 0x09, 0x12, "ALL18.VOC" },
  { 0x09, 0x13, "ALL19.VOC" },
  { 0x09, 0x14, "ALL20.VOC" },
  { 0x09, 0x15, "ALL21.VOC" },
  { 0x09, 0x16, "ALL22.VOC" },
  { 0x09, 0x2D, "ALL46.VOC" },	// This sound is missing in the original DOS version
  { 0x09, 0x2E, "ALL46.VOC" },
  { 0x09, 0x33, "ALL51.VOC" },
  { 0x09, 0x34, "ALL52.VOC" },
  { 0x09, 0x35, "ALL53.VOC" },
  { 0x09, 0x36, "ALL54.VOC" },
  { 0x09, 0x38, "ALL56.VOC" },
  { 0x09, 0x39, "ALL57.VOC" },
  { 0x09, 0x3A, "ALL58.VOC" },
  { 0x09, 0x3B, "ALL59.VOC" },

  { 0x00, 0x1A, "JUN26.VOC" },
  { 0x00, 0x1B, "JUN27.VOC" },
  { 0x00, 0x1C, "JUN28.VOC" },

  { 0x01, 0x1A, "DES26.VOC" },
  { 0x02, 0x1A, "ICE26.VOC" },

  { 0x02, 0x1E, "ICE30.VOC" },
  { 0x02, 0x1F, "ICE31.VOC" },

  { 0x03, 0x1A, "MOR26.VOC" },
  { 0x03, 0x1C, "MOR28.VOC" },

  { 0x04, 0x1A, "INT26.VOC" },
  { 0xFF, 0xFF, "" }
};
