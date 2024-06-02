export const moduleDirectoryExtension = '.rte';

export const imageFileExtensions = ['.bmp', '.png', '.jpg', '.jpeg'];
export const scriptFileExtensions = ['.ini', '.txt', '.lua', '.cfg'];
export const soundFileExtensions = ['.wav', '.ogg', '.mp3', '.flac'];
export const legalFileExtensions = [
  ...imageFileExtensions,
  ...scriptFileExtensions,
  ...soundFileExtensions,
];

export function asGlob(extensions: string[]): string {
  const list = extensions.map((extension) => extension.substring(1)).join();
  const glob = `**/*.{${list}}`;
  return glob;
}

export const imageFileGlob = asGlob(imageFileExtensions);
export const scriptFileGlob = asGlob(scriptFileExtensions);
export const soundFileGlob = asGlob(soundFileExtensions);
export const legalFileGlob = asGlob(legalFileExtensions);
