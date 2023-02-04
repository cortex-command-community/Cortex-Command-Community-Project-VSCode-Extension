export function shared(): string {
  return 'shared';
}

export const imageFileExtensions = ['.bmp', '.png', '.jpg', '.jpeg'];
export const scriptFileExtensions = ['.ini', '.txt', '.lua', '.cfg'];
export const soundFileExtensions = ['.wav', '.ogg', '.mp3', '.flac'];
export const legalFileExtensions = [
  ...imageFileExtensions,
  ...scriptFileExtensions,
  ...soundFileExtensions,
];
